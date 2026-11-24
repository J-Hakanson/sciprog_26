#include <stdio.h>
#include <math.h>

/* function arctanh1 to approximate as maclaurin series that stops when element in the series is smaller than delta */
double artanh1(double x, double delta) {
    /* double to count the sum */
    double sum = 0.0;
    double x_n = x;       /* x^(2n+1) starting at n=0 -> x^1 */
    double n_term;
    int n = 0;

    /* infinite loop that runs until n_term is smaller than delta */
    while (1) {
        n_term = x_n / (2.0 * n + 1.0);
        if (fabs(n_term) < delta) {
            break;
        }
        sum += n_term;
        n++;
        x_n = pow(x, (2 * n) + 1);
    }

    return sum;
}

double artanh2(double x) {
    return 0.5 * (log(1.0 + x) - log(1.0 - x));
}

int main(void) {
    int num_samples = 181; /* -0.90 to 0.90 in steps of 0.01 */
    double array_arctanh1[num_samples];
    double array_arctanh2[num_samples];
    double delta; 
    double x;
    int i;

    printf("Enter a positive real number delta:\n");
    scanf("%lf", &delta);


    for (i = 0; i < num_samples; i++) {
        x = -0.9 + (i * 0.01);
        array_arctanh1[i] = artanh1(x, delta);
        array_arctanh2[i] = artanh2(x);
    }

    printf("x          artanh1            artanh2            difference (absolute value) \n");
    for (i = 0; i < num_samples; i++) {
        x = -0.9 + i * 0.01;
        printf("%.2f      %.10f      %.10f      %.10f\n", x, array_arctanh1[i], array_arctanh2[i], fabs(array_arctanh1[i] - array_arctanh2[i]));
    }

    printf("");

    return 0;
}