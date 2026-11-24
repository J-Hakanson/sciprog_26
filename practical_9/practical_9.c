#include <stdio.h>
#include <stdlib.h>

int isMagicSquare(int ** square, const int n) {
    if(n < 0) {
        return 0;
    }
    
    // counters
    int i;
    int j;

    // sums
    int M = (n * (n*n + 1))/2;
    int row;
    int column;
    int diag = 0;
    int anti_diag = 0;

    // checking row and column sum
    for (i = 0; i < n; i++) {
        row = 0;
        column = 0;

        // iterating through each element in row/column
        for (j = 0; j < n; j++) {
            row += square[i][j];
            column += square[j][i];
        }

        if (row != M) {
            return 0;
            break;
        }

        if (column != M) {
            return 0;
            break;
        }
    }

    // checking diagonal and antidiagonals
    for (i = 0; i < n; i++) {
        diag += square[i][i];
        anti_diag += square[i][n - 1 - i];
    }

    if (diag != M) {
        return 0;
    }
    if (anti_diag != M) {
        return 0;
    }

    return 1;

}


int main(void) {
    // initializing n
    int n = 0; 
    
    // counters
    int i, j; 
    int magic;

    FILE *f;
    f = fopen("magic_square.txt", "r");

    // reading n
    fscanf(f, "%d", &n);

    // initializing matrix with n dimensions
    int **square = (int **) malloc(n * sizeof(int *));
    for (i = 0; i < n; i++) {
        square[i] = (int *) malloc(n * sizeof(int));
    }

    // reading all the elements and filling the array
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            fscanf(f, "%d", &square[i][j]);
            // printf("%d", square[i][j]);
        }
        // printf("\n");
    } 
    fclose(f);

    // using function to see if square is magic
    magic = isMagicSquare(square, n);

    // printing result
    if (magic == 1) {
        printf("The square is magic!\n");
    } 
    else {
        printf("Not a magic square.\n");
    }

    return 0;
}