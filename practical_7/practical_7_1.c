#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    // order taken from input
    int order;


    printf("Enter some integer for polynomial order to estimate a value of e:\n");
    scanf("%d", &order);


    // pointer to dynamically allocated array used for calculating f_x
    double *terms;
    double f_x = 0;
    // factorial to use in calculation starting at 1
    double factorial = 1;

    // real value of e to compare to
    double e_acc = 2.718281828459045;

    
    // counters
    int i;
    int k;

    // using malloc to point to block of reserved memory an apporpriate size
    terms = (double *) malloc((order + 1) * sizeof(double));
    // setting first term of polynomial = 1
    terms[0] = 1;

    // loop that fills array and finds f_x up to the order
    for (k = 1; k <= order; k++) {
        factorial *= k;
        terms[k] = 1 / factorial;
        f_x += terms[k];
    }

    f_x += terms[0];


    // comparison of estimate up to order given to true value
        printf("Order %d estimate: %.10f | e: %.10f | Error: %.10f\n\n", order, f_x, e_acc, fabs((f_x - e_acc)/e_acc));
    





    // Evaluating estimates from 1st order to 15th order polynomials

    printf("Order    | Estimate      | e              | Error   \n");
    double *n_terms;
    for (i = 1; i <= 15; i++) {
        n_terms = (double *) malloc((i + 1) * sizeof(double));
        factorial = 1.0;
        f_x = 0;

        n_terms[0] = 1.0;

        // same process as last time
        for (k = 1; k <= i; k++) {
            factorial *= k;
            terms[k] = 1 / factorial;
            f_x += terms[k];
        }

        f_x += terms[0];

        printf("%d        | %.10f  | %.10f   | %.10f\n", i, f_x, e_acc, fabs((f_x - e_acc)/e_acc));
    }

    
    return 0;
}