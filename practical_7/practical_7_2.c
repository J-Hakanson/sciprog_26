#include <stdio.h>
#include <stdlib.h>

// function that takes integer as an argument and returns a pointer to an allocated memory block of that many integers
int *allocatearray(int n) {
    int *p;
    p = malloc(n * sizeof(int));
    return p;
}

// function that tkaes a pointer to an array of integers and fills every cell of the array with one
// what other argument do you need to pass this function?
    // it also needs the array length (n) because sizeof() doesn't work with dynamic arrays
void fillwithones(int *array, int n) {
    int i;
    // filling until i = array length (n)
    for (i = 0; i < n; i++) {
        array[i] = 1;
    }
}

// function that takes a pointer to an array of integers and prints its elements on screen
// we need the array length again here
void printarray(int *array, int n) {
    int i;
   // printing each line
    for (i = 0; i < n; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }
}

// function to free the allocated memory
void free_arr(int **array) {
    free(*array);
    // assigning NULL to freed pointer to avoid doing anything dangerous with the memory
    *array = NULL;
}

int main(void) {
    int *array;
    int n = 7;

    // testing 3 array sizes
    printf("Array filled with ones of length: %d\n", n);
    array = allocatearray(n);
    fillwithones(array, n);
    printarray(array, n);
    free_arr(&array);
    printf("\n");


    int j = 4;
    printf("Array filled with ones of length: %d\n", j);
    array = allocatearray(j);
    fillwithones(array, j);
    printarray(array, j);
    free_arr(&array);
    printf("\n");



    int l = 12;
    printf("Array filled with ones of length: %d\n", l);
    array = allocatearray(l);
    fillwithones(array, l);
    printarray(array, l);
    free_arr(&array);
    printf("\n");
    return 0;
}