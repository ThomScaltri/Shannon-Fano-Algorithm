
#include "initializer.h"

//librerie usate da shf
#include "file.h"
#include "ShF.h"

const int DIM=256;//DIMENSIONE FISSA ARRAY DI TUTTI I CHAR POSSIBILI

int main(int argc,char* argv[]){

   /*if(argc != 4){
        log_error("Number of parameters not enough. Must be sure passing 4 parameters");
        exit(1);
    }
   else{
      init_algorithm(argv[2],argv[3],argv[1]);
   }*/

    //Test per SHF
    unsigned char* txt=readFile("ff_ff_ff");
    unsigned long long dimfile=dimFile("ff_ff_ff");

    shF_Compress(txt,dimfile,DIM);

    shF_DeCompress("compressed",DIM);

    return 0;
}
