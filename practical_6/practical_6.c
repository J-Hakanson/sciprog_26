#include <stdio.h>

// declaring function for makefile
void matmult(int n, int p, int q, double A[n][p], double B[p][q], double C[n][q]);

int main(void) {
    // defining n, p, and q
    int n = 5;
    int p = 3;
    int q = 4;

    // declaring 3 arrays
    double A[n][p];
    double B[p][q];
    double C[n][q];

    // counters
    int i;
    int j;
    int k;
    // term to fill matrices
    double term = 0;

    // initializing C to zero
    for (i = 0; i < n; i++) {
        for (j = 0; j < q; j++) {
            C[i][j] = 0.0;
        }
    }

    // initializing A to i + j
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            // i and j are plus 1 because the matrices are indexed at zero
            term = (i + 1) + (j + 1);
            A[i][j] = term;
        }
    }

    // initializing B to i - j
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            // i and j are plus 1 because the matrices are indexed at zero
            term = (i + 1) - (j + 1);
            B[i][j] = term;
        }
    }

    // pulling Matrix C from matmult
    matmult(n, p, q, A, B, C);

    // Printing matrix A
    printf("Matrix A:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            printf("%lf ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n \n");

    // Printing matrix B
    printf("Matrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%lf ", B[i][j]);
        }
        printf("\n");
    }
    printf("\n \n");

    // Printing matrix C
    printf("Matrix C:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < q; j++) {
            printf("%lf ", C[i][j]);
        }
        printf("\n");
    }
    printf("\n \n");


    return 0;
}