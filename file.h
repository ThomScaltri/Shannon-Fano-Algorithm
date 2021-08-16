
#ifndef PROJECT_FILE_H
#define PROJECT_FILE_H

#endif //PROJECT_FILE_H


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned char* readFile(unsigned char* nomefile);

unsigned long long  dimFile(unsigned char* nomefile);

unsigned char* writeFile(unsigned char* nomefile,unsigned char* str);