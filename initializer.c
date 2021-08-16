
#include "initializer.h"
#include "file.h"
#include "ShF.h"

/**
 * Initializes the process
 * @param path_in
 * @param path_out
 * STATUS: OK
 */
/*void init_algorithm(const char* path_in, const char* path_out, const char* option){

    status status_in = open_stream(path_in, READ);
    status status_out = open_stream(path_out, WRITE);
    if(status_in == OPEN && status_out == OPEN){
        clock_t start = clock();
        if(strcmp(option,"-lc") == 0){
            encode_lzs();
        }
        else if(strcmp(option,"-ld") == 0){
            decode_lzs();
        }
        if(strcmp(option,"-sc") == 0){
            unsigned char* txt=readFile("path_in");
            unsigned long long dimfile=dimFile("path_in");
            shF_Compress(txt,dimfile,256);
            close_stream(WRITE);
        }
        else if(strcmp(option,"-sd") == 0){
            shF_DeCompress(path_in,256);
            close_stream(WRITE);
        }
        clock_t end = clock();
        double time = (double) (end - start) / CLOCKS_PER_SEC;
        printf("Elapsed time:  %lf\n",time);
    }
    if(status_in == OPEN){
        close_stream(READ);
    }
    if(status_out == OPEN){
        close_stream(WRITE);
    }
}*/

void init_algorithm(const char* path_in, const char* path_out, const char* option){

        clock_t start = clock();
        if(strcmp(option,"-c") == 0){
            unsigned char* txt=readFile(path_in);
            unsigned long long dimfile=dimFile(path_in);
            shF_Compress(txt,dimfile,256);
        }
        else if(strcmp(option,"-d") == 0){
            unsigned char* compressedtxt=readFile(path_in);
            shF_DeCompress(compressedtxt,256);
        }
        clock_t end = clock();
        double time = (double) (end - start) / CLOCKS_PER_SEC;
        printf("Elapsed time:  %lf\n",time);
}

