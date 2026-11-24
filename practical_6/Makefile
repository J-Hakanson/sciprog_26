CC = gcc
CFLAGS = -g

prog: practical_6.o matmult.o
	$(CC) $(CFLAGS) -o prog practical_6.o matmult.o

practical_6.o: practical_6.c
	$(CC) $(CFLAGS) -c practical_6.c

matmult.o: matmult.c
	$(CC) $(CFLAGS) -c matmult.c