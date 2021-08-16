#A simple Makefile to run the project
CC = gcc
RM = rm

#Set standard C99
STD = -std=c99

utils.o: utils.c utils.h
	$(CC) -c -Wall $(STD) utils.c

bit_op.o: bit_op.h bit_op.c
	$(CC) -c  -Wall $(STD) bit_op.c

stream.o: stream.c stream.h
	$(CC) -c -Wall $(STD) stream.c

file.o: file.c file.h
	$(CC) -c -Wall $(STD) file.c

ShF.o: ShF.c ShF.h
	$(CC) -c -Wall $(STD) shF.c


initializer.o: initializer.c initializer.h
	$(CC) -c -Wall $(STD)  initializer.c

main.o: main.c
	$(CC) -c -Wall $(STD) main.c

shf.a: utils.o bit_op.o stream.o file.o ShF.o initializer.o
	ar -r shf.a utils.o bit_op.o stream.o file.o ShF.o initializer.o

shf: lzs_sf.a main.o

	$(CC) -o shf main.o $(STD) -L. shf.a -lm

clean:
	$(RM) -f *.o *.a *.exe

.PHONY: clean