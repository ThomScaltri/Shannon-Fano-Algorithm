
#ifndef LZS_UTILS_H
#define LZS_UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef unsigned int ui;
typedef unsigned char uc;

ui count_bits(ui num);
void log_error(const char* msg);
uc* dec_to_bin(ui num,ui num_bits);
ui bin_to_dec(uc* bits,ui num_bits);


#endif //LZS_UTILS_H
