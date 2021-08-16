
#ifndef PROJECT_SHF_H
#define PROJECT_SHF_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//Struttura per array utilizzato nel calcolo/ordinamento frequenza
struct node {
    unsigned char character;        //Contiene il carattere
    unsigned long long occurrency;  //Contiene l'occorrenza dei caratteri
    char* code;                     //Stringa per "visualizzare" la codifica in binario , si lo so è inutile ma mi serviva per fare debug
    unsigned long long  bitcode;    //contiene il valore della codifica
    unsigned long long codelen;     //contiene la lunghezza della codifica
    unsigned long long canon;       //contiene il valore della codifica canonica
} typedef node;


//NON serve più
/*struct decode{
    unsigned char character;
    unsigned long long code;
    unsigned long long codelen;
}typedef decode;*/

//Funzione che inizializza il campo "character" dell'array di tipo node con caratteri ordinati secondo ASCII
void initcharsArray(node* charArray, int DIM);

//funzione che calcola l'occorrenza dei caratteri
void countOccurency(const unsigned char* text, node* charArray, unsigned long long  dimFile);

//funzione che divide l'array ordinato e ritorna l'indice che lo bilancia correttamente
int balancedFreq(node* orderedArr, int from, int to);

void recursiveCodifyArray(node* charArray, int from, int to);

int compareOccurrency(const void * a, const void * b);

int compareLength(const void * a, const void * b);

void canonizeCodifiedArray(node* arr,int DIM);

void writeToFile(node* coded,int DIM, const unsigned char* txt,unsigned long long  dimfile);

void shF_Compress(const unsigned char* txt,unsigned long long  dimfile,int DIM);

///////////////////////////////////////////DECOMPRESSION FUNCTION////////////////////////////////////////////////////

void extractHeader(node* compressedtxt,int DIM);

bool searchCode(node* compressedtxt,unsigned long long code,int DIM);

void decompFile(node* compressedtxt,int DIM);

void shF_DeCompress(unsigned char* filename,int DIM);

#endif //PROJECT_SHF_H







