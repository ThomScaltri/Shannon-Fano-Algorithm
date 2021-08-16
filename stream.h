
#ifndef LZS_STREAM_H
#define LZS_STREAM_H

#include "utils.h"
#include "bit_op.h"

#include <stdio.h>

//Puntatori a file doppi diversificati per SHF
FILE* input;
FILE* output;


enum mode {READ,WRITE};
enum status{OPEN,CLOSE,ERROR,OK};

typedef enum mode mode;
typedef enum status status;
typedef unsigned int ui;
typedef unsigned char uc;

/*
 * IMPORTANT: The first four procedures were been adapted by an example on iCorsi platform.
 */
void print_file();
long read_file_size();
int is_eof();


status read_byte(uc* byte);
status write_byte(uc* byte);
status write_stream(uc* byte_stream,ui n_byte);

status openStream(char* filename, mode mode);
status closeStream(mode mode);
status readBit(uc * bit);
status writeBit(uc bit);


#endif //LZS_STREAM_H
