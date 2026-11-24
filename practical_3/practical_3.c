#include <stdio.h>
#include <math.h>

int main(void) {
    /* Declaring varibles */
    int N = 12;
    int i;

    /* pi */
    double pi = 3.141592653589793;

    double a = 0.0;
    double b = pi / 3.0;

    /* interval for the 11 equidistant points */
    double interval = (b - a) / N;

    /* Finding first part of the sum (2)*/
    double sum_i = tan(a) + tan(b);
    double sum = 0.0;

    /* point to use in the function */
    double x_i;
    /* Total cum to keep a count */
    double sum_tot;

    /* log(2) to compare the sum to */
    double exact_integral = log(2.0);

    /* Loop that takes 11 equdistant points and adds 2tan(x_i) for each of the 11 points */
    for (i = 1; i <= N - 1; i++) {
        x_i = a + i * interval;
        sum = sum + 2.0 * tan(x_i);
    }

    /* adding the endpoints and multiplying by \frac{b-a}{2N} */
    sum_tot = ((b - a) / (2.0 * N)) * (sum_i + sum);

    printf("Approximate integral (N=12): %.6f\n", sum_tot);
    printf("Exact value log(2): %.6f\n", exact_integral);

    /* percent error to comment on the difference */
    double error;
    error = ((sum_tot - exact_integral) / exact_integral) * 100;

    printf("The area calculated under the curve found using the trapezoidal rule for the interval 0 to pi/3 for tan(x) differs from the exact \nvalue by %.2f percent. This is very close to the real value so I am confident saying this is a good approximation.\n", error);
    return 0;
}