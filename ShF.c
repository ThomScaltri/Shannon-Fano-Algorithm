
#include "ShF.h"
#include <math.h>
#include <stdbool.h>
#include "stream.h"

int numCharTot=0;
int charscritti=0;

//OK
/**
 * Funzione che inizializza
 * la struttura dati principale
 * @param charArray
 * @param DIM
 */
void initcharsArray(node* charArray, int DIM)
{
    for(int i=0;i<DIM;i++)
    {
        (charArray+i)->character=i;
        (charArray+i)->occurrency=0;
        (charArray+i)->bitcode=0;
        (charArray+i)->code=(char*) malloc(DIM * sizeof(char));
        (charArray+i)->codelen=0;
        (charArray+i)->canon=0;
    }
}

//OK
/**
 * Funzione che conte tutte le occorrenze dei caratteri
 * @param text
 * @param charArray
 * @param dimFile
 */
void countOccurency(const unsigned char* text, node* charArray, unsigned long long dimFile)
{
    printf("dim :%llu\n",dimFile);

    for(unsigned int i=0; i<dimFile; i++)
    {
        unsigned char currentByte=text[i];
        (charArray + currentByte)->occurrency++;
        numCharTot++;
    }
    printf("chart tot: %d\n",numCharTot);
}

//OK
/**
 * compare per ordinamento alfabetico
 * @param a
 * @param b
 * @return
 */
int compare(const void *a, const void *b) {
    node* orderA = (node *)a;
    node* orderB = (node *)b;
    return orderA->character - orderB->character;
}

//OK
/**
 * compare per ordinamento in base ad occorenza decrescente
 * @param a
 * @param b
 * @return
 */
int compareOccurrency(const void * a, const void * b){
    node* orderA = (node *)a;
    node* orderB = (node *)b;

    if(orderB->occurrency > orderA->occurrency)
        return 1;
    else if(orderB->occurrency < orderA->occurrency)
        return -1;
    else
        return (int)( orderB->character - orderA->character);
}

//OK
/**
 * compare per ordinamento in base a lunghezza di codifica crescente
 * @param a
 * @param b
 * @return
 */
int compareLength(const void * a, const void * b){
    node* orderA = (node *)a;
    node* orderB = (node *)b;

    if(orderB->codelen < orderA->codelen)
        return 1;
    else if(orderB->codelen > orderA->codelen)
        return -1;
    else
        return (int)(orderA->character - orderB->character);
}

//TODO Da rivedere
/**
 * funzione che ritorna l'indice che bilancia al meglio le frequenze
 * dell'arraynper effettuare lo split
 * @param orderedArr
 * @param from
 * @param to
 * @return
 */
int balancedFreq(node* orderedArr, int from, int to)
{

    int i=from;
    int j=to;

    unsigned long long sumLeft=(orderedArr+i)->occurrency;
    unsigned long long sumRight=(orderedArr+j)->occurrency;

    while(i!=j-1)
    {
        if(sumLeft>sumRight){
            j--;
            sumRight+=(orderedArr+j)->occurrency;
        }
        else{
            i++;
            sumLeft+=(orderedArr+i)->occurrency;
        }
    }
    return i;
}

//TODO Da rivedere
/**
 * funzione che splitta ricorsivamente in due, in base l'indice calcolato con balancedFreq,
 * per calcolare la codifica di Shannon Fano.
 * Assegna 0 alla parte sinistra dell'array , 1 a destra
 * @param arr
 * @param from
 * @param to
 */
void recursiveCodifyArray(node* arr, int from, int to){

    if(from==to)
        return;

    int middle=balancedFreq(arr,from,to);

    for (int i = from; i <= middle; i++) {
        strcat((arr+i)->code,"0");
        (arr+i)->codelen+=1;
        (arr+i)->bitcode <<=1;
    }
    for (int i=middle+1; i <= to; i++) {
        strcat((arr+i)->code,"1");
        (arr+i)->codelen+=1;
        (arr+i)->bitcode <<= 1;
        (arr+i)->bitcode |= 1;
    }

    if((middle-from)>=1)
    {
        recursiveCodifyArray(arr, from, middle);
    }

    if(to-(middle+1)>=1)
    {
        recursiveCodifyArray(arr,middle+1,to);
    }
}

//TODO Da rivedere
/**
 * funzione che calcola la codifica canonica
 * date le lunghezze di codifica iniziali
 * Utilizzata anche in decompressione per ricostrutire la canonica
 * @param arr
 * @param DIM
 */
void canonizeCodifiedArray(node* arr,int DIM)
{
    //Ordinamento per lunghezza crescente STABILE
    qsort(arr,DIM,sizeof(node),compareLength);

    unsigned long long currlen=(arr+0)->codelen;
    unsigned long long preclen=currlen;

    (arr+0)->canon=0;
    (arr+0)->codelen=currlen;

    for(int i=1; i<DIM ;i++)
    {
        currlen=(arr + i)->codelen;

        if(currlen==preclen)
            (arr + i)->canon = (arr + i - 1)->canon +1;
        else
        {
            unsigned long long diff=currlen-preclen;
            unsigned long long code=(arr + i - 1)->canon;
            code+=1; //ERRORE
            code<<=diff;
            (arr + i)->canon=code;
            preclen=currlen;
        }
    }

    //Ordinamento alfabetico per scrittura su file
    qsort(arr, DIM, sizeof(node), compare);

    //stampa per verifica codifiche
    /*for(int i=0;i<DIM;i++)
    {
        printf("%d\t",i);
        printf("%llu\t",(arr+i)->codelen);
        printf("%llu\n",(arr+i)->canon);
    }*/
}

//TODO Da rivedere
/**
 * funzione che si occupa della scrittura dell'header (lunghezze + codifiche)
 * e fa la sostituzione delle codifiche con i caratteri del testo
 * @param coded
 * @param DIM
 * @param txt
 * @param dimfile
 */
void writeToFile(node* coded,int DIM, const unsigned char* txt,unsigned long long  dimfile)
{
    openStream("compressed",WRITE);

    //scrittura lunghezze
    for(int i=0;i<DIM;i++)
    {
        fputc((int)(coded+i)->codelen,output);
    }

    //scrittura codifica
    /*for(int i=0;i<DIM;i++)
    {
        unsigned long long len=(coded+i)->codelen;
        unsigned long long numtoBin=(coded+i)->canon;

        //Binario Big Endian
        for(unsigned long long j=0;j<len;j+=1)
        {
            if (numtoBin % 2 == 0)
                writeBit(0);
            else if (numtoBin % 2 == 1)
                writeBit(1);

            numtoBin /= 2;
        }
    }*/

    //sostituzione testo con codifiche
    for(int i=0;i<dimfile;i++)
    {
        unsigned char c=txt[i];
        unsigned long long len=(coded+c)->codelen;
        unsigned long long numtoBin=(coded+c)->canon;

        for(int j=0;j<len;j++) {
            if (numtoBin % 2 == 0)
                writeBit(0);
            else if (numtoBin % 2 == 1)
                writeBit(1);

            numtoBin /= 2;
        }
    }

    closeStream(WRITE);
}

//OK
/**
 * funzione che richiama le altre, esegue tutti i passi della compressione di Shannon Fano
 * @param txt
 * @param dimfile
 * @param DIM
 */
void shF_Compress(const unsigned char* txt,unsigned long long  dimfile,int DIM){

    node* arr=(node*) malloc(DIM * sizeof(node));
    initcharsArray(arr,DIM);


    countOccurency(txt,arr,dimfile);

    //Ordinamento per occorenza decrescente
    qsort(arr, DIM, sizeof(node), compareOccurrency);

    recursiveCodifyArray(arr,0,DIM-1); //255

    //printf("COMPRESSIONE\n");
    canonizeCodifiedArray(arr,DIM);

    //scrittura su file
    writeToFile(arr,DIM,txt,dimfile);

    //pulizia
    free(arr);
}


///////////////////////////////////// SHANNON FANO - FUNZIONI PER DECOMPRESSIONE ///////////////////////////////////////////////////////////////

//TODO Da rivedere
/**
 * funzione che estrae l'header (lunghezze + codifiche)
 * e li inserisce in una struttura dati per memorizzazione temporanea (array)
 * @param compressedtxt
 * @param DIM
 */
void extractHeader(node* compressedtxt,int DIM)
{
    //Lettura lunghezze OK
    for(int i=0;i<DIM;i++)
    {
        (compressedtxt+i)->codelen=(unsigned long long)fgetc(input);
        (compressedtxt+i)->character=i;
        printf("\n%llu\t",(compressedtxt+i)->codelen);
        printf("%hhu\n",(compressedtxt+i)->character);
    }

    //Lettura codifiche - fa un pò schifo ma funziona :)
    /*for(int i=0;i<DIM;i++)
    {
        unsigned long long len=(compressedtxt+i)->codelen;
        unsigned long long array[len];
        unsigned char bit;
        status st;
        unsigned long long j=0;

        while (j<len && (ERROR != (st = readBit(&bit))) ){

            if(bit==0)
                array[j]=0;
            else if(bit==1)
                array[j]=1;

            j++;
        }

        unsigned long long x=0;
        for(unsigned long long k=0; k<len; k++)
        {
            (compressedtxt+i)->code += (unsigned long long)(array[k] * pow(2,x));
            x++;
        }

    }*/

}

//TODO Qui c'è sicuramente un errore - Scrive piu del dovuto
/**
 * esegue la ricerca e sostituzione di un codice calcolato all'interno della nostra struttura dati
 * @param compressedtxt
 * @param code
 * @param DIM
 * @return
 */
bool searchCode(node* compressedtxt,unsigned long long code,int DIM)
{
    for(int i=0;i<DIM;i++)
    {
        if(code==((compressedtxt+i)->canon)) {
            fputc((char)(compressedtxt+i)->character, output);
            charscritti+=1; //non capisco perchè me ne scrive troppi
            return true;
        }
    }
    return false;
}

//TODO Da rivedere
/**
 * estrae bit per bit della parte "compressa" e ne ricostruisce un codice
 * @param compressedtxt
 * @param DIM
 */
void decompFile(node* compressedtxt,int DIM)
{
    unsigned char bit;
    unsigned long long code=0;
    bool found=false;

    while(ERROR != readBit(&bit))
    {
        code <<= 1;
        code |= bit;

        found=searchCode(compressedtxt,code,DIM);

        if(found)
        {
            code = 0;
            found = false;
        }
    }

}

/**
 * funzione che richiama le altre, necessarie ad effettuare la decompressione di Shannon Fano
 * @param filename
 * @param DIM
 */
void shF_DeCompress(unsigned char* filename,int DIM){

    openStream(filename, READ);
    openStream("decompressed",WRITE);

    node* deco=(node*) malloc(sizeof(node)*DIM);

    extractHeader(deco,DIM);


    printf("DECOMPRESSIONE\n");

    canonizeCodifiedArray(deco,DIM);


    decompFile(deco,DIM);

    free(deco);


    closeStream(READ);
    closeStream(WRITE);

    //
    printf("tot char scritti: %d",charscritti);
}