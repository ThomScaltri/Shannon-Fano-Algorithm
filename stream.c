
#include "stream.h"

static FILE* fin = NULL;
static FILE* fout = NULL;

// Local buffer to store data
uc buffer_in = 0;
uc buffer_out = 0;

// Counter of local buffer
char inp_cnt = 0;
char outp_cnt = 0;


static status status_in = CLOSE;
static status status_out = CLOSE;

static uc buf_in;
static ui in_count = 0;
static uc buf_out;
static ui out_count = 0;
/**
 * TEST
 * Print bytes of a fle
 * STATUS: OK
 */
void print_file(){
    uc *byte = (uc*) malloc(1);
    while(!feof(fin)){
        read_byte(byte);
         printf("%u\n",*byte);
    }
    free(byte);
}

/**
*  Check if EOF has been reached
 * @return 1 if it's EOF, otherwise 0
 * STATUS: OK
 */
int is_eof(){
    if(fin)
        return feof(fin);
    else
        log_error("File hasn't been opened");
    return -1;
}

 long read_file_size(){
    if(!fin)
        log_error("Error. It has been passed an invalid pointer");
    fseek(fin, 0, SEEK_END);
    long size = ftell(fin);
    rewind(fin);
    return size;
}

/**
 * Read a byte from input stream
 * @param byte
 * @return the outcome of operation done
 * STATUS: OK
 */
status read_byte(uc* byte){
     if(status_in == OPEN){
         *byte = (uc) fgetc(fin);
         return OK;
     }
    return ERROR;
}


/**
 * Write a byte on file
 * @param byte
 * @return the outcome of operation done
 * STATUS: OK
 */
 status write_byte(uc* byte){
    if(status_out == OPEN){
        fputc((int)(*byte),fout);
        return OK;
    }
    return ERROR;
}


/**
 * Write a stream on byte on file
 * @param byte_stream
 * @param n_byte
 * @return the outcome of operation done
 * STATUS: OK
 */
status write_stream(uc* byte_stream,ui n_byte){
    if(status_out == OPEN){
        fwrite(byte_stream,n_byte,sizeof(uc),fout);
        return OK;
    }
    return ERROR;
}

// open a bit stream
status openStream(char* filename, mode mode){
    if (mode == READ){
        if (status_in != CLOSE){
            printf("Error input stream not closed\n");
            status_in = ERROR;
            return ERROR;
        }
        if ((input=fopen(filename, "rb"))==NULL){
            printf("Error opening file\n");
            status_in = ERROR;
            return ERROR;
        }
        status_in = OPEN;
        return status_in;
    }
    if (mode == WRITE){
        if (status_out != CLOSE){
            printf("Error output stream not closed\n");
            status_out = ERROR;
            return ERROR;
        }
        if ((output=fopen(filename, "wb"))==NULL){
            printf("Error opening file\n");
            status_out = ERROR;
            return ERROR;
        }
        status_out = OPEN;
        return status_out;
    }
}

// close a bit stream
status closeStream(mode mode){
    if (mode == READ){
        if (status_in != OPEN){
            printf("Error input stream not open\n");
            status_in = ERROR;
            return ERROR;
        }
        fclose(input);
        status_in = CLOSE;
        return status_in;
    }
    if (mode == WRITE){
        if (status_out != OPEN){
            printf("Error input stream not open\n");
            status_out = ERROR;
            return ERROR;
        }
        fclose(output);
        status_out = CLOSE;
        return status_out;
    }
}

// read one bit from stream
status readBit(uc * bit){

    if (status_in != OPEN) return ERROR;

    if (inp_cnt == 0){
        int ch;
        if (EOF != (ch = fgetc(input))){
            if (ferror(input) != 0){
                printf("Problems with input file\n");
                return ERROR;
            }
            buffer_in = (uc) ch;
            inp_cnt = 8;
        }
        else
        {
            return ERROR;
        }
    }

    (*bit) = bitStatus(&buffer_in, inp_cnt-1);
    inp_cnt--;
    return OK;
}

// write one bit from stream
status writeBit(uc bit){

    if (status_out != OPEN) return ERROR;

    (bit > 0) ? setBit(&buffer_out, 7-outp_cnt) : clearBit(&buffer_out, 7-outp_cnt);

    outp_cnt++;
    if (outp_cnt == 8){
        fputc(buffer_out, output);
        buf_out = outp_cnt = 0;
    }

    return OK;
}





