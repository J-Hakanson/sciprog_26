This is a program that multiplies two matrices and prints Matrices A, B, and C = AxB. It does so using three files: Makefile, matmult.c, and practical_6.c. matmult.c contains a function that multiplies two given matrices together and fills a third matrix (already initialized to the correct dimensions and to be full of zeros) with the result. Makefile contains commands that compile the other two files into the executable. It is then called in the practical.c function to multiply the matrices given in that file. 

This program can be run using the rolling lines in your terminal:

make
- uses Makefile to compile the other two files into the executable

./prog
- runs executable