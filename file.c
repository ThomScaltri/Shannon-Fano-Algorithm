
#include "file.h"

unsigned long long dimFile(unsigned char* nomefile)
{
    FILE* file = fopen(nomefile,"rb");
    if(file == NULL)
    {
        return NULL;
    }

    fseek(file, 0, SEEK_END);
    long int size = ftell(file);
    rewind(file);

    return size;
}

unsigned char* readFile(unsigned char* nomefile)
{
    FILE* file = fopen(nomefile,"rb");
    if(file == NULL)
    {
        return NULL;
    }

    fseek(file, 0, SEEK_END);
    unsigned long long size = ftell(file);
    rewind(file);

    unsigned char* input =(unsigned char*) malloc(sizeof(unsigned char) * size +1);

    fread(input,sizeof(unsigned char),size,file);

    return input;
}

unsigned char* writeFile(unsigned char* nomefile ,unsigned char* str)
{
    FILE* file=fopen(nomefile,"wb");
    if (file == NULL)
    {
        printf("errore scrittura file");
    }
    else
        fputs(str, file);

    fclose(file);
    return file;
}

