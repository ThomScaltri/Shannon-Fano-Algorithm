
#include "utils.h"

/**
 * Write a message on stderr
 * @param msg to write o stderr
 * STATUS: OK
 */
void log_error(const char* msg){
    perror(msg);
}
/**
 * @param num to convert in binary
 * @return the numbers of bits used the represent the number
 * STATUS: OK
 */
ui count_bits(ui num){
    return (ui) log2(num) + 1;
}
/**
 * @param num to convert in binary
 * @param num_bits necessary to convert the num
 * @return the representation of the number in binary mode
 * STATUS: OK
 */
uc* dec_to_bin(ui num,ui num_bits){
    ui num_bits_necessary= count_bits(num);
    ui remaining_bits = num_bits - num_bits_necessary ;
    ui index = 0; // pointer's pos
    uc* bin = (uc*) malloc(num_bits * sizeof(uc));
    if(!bin)
        log_error("Memory allocation failed");
    for(int i = 0;i < remaining_bits; i++) {
            *(bin + index) =  0;
            index++;
    }
    for(int i = num_bits_necessary- 1; i>= 0; i--){
        ui k = num >> i;
        if(k & 1)
            *(bin + index) = 1;
        else
            *(bin + index) = 0;
        index++;
    }
    return bin;
}
/**
 * @param bits-array
 * @return the decimal representation of bits
 * STATUS: OK
 */
ui bin_to_dec(uc*  bits,ui num_bits){
    ui res = 0;
    ui exp = num_bits - 1;
    for(int i = 0; i < num_bits; i++){
        if(*(bits + i) == 1){
            res += (ui) pow(2,exp);
        }
        exp--;
    }
    return res;
}
