#include <stdio.h>
#include <math.h>

float pi;

/* Global array that will hold the values of tan(x) of 0-60 degrees */
double tan_vals[13];
int N = 12;

/* Function from 4.3 to convert degrees into radians */
float degtorad(float arg);
double tan_area(int n);

float degtorad(float arg) {
    return ( (pi * arg) / 180.0 );
}

/* function that calculated the area under the curve of tan(x) from o to 60 */
double tan_area(int n) {
    /* a and b in radians converting from degrees */
    double a = 0.0;
    double b = degtorad(60.0);

    double sum_i = tan(a) + tan(b);
    double sum = 0.0;
    double sum_tot;
    int k;

    /* calculating sum using the values from our global tan array */
    for (k = 1; k < n; k++) {
        sum = sum + 2.0 * tan_vals[k];
    }

    /* adding the endpoints and multiplying by (b-a)/(2N) */
    sum_tot = ((b - a) / (2.0 * n)) * (sum_i + sum);
    return sum_tot;
}

int main(void) {
    int j;
    double degree;
    double rad;

    /* Set global pi before calling degtorad() */
    pi = atanf(1.0) * 4.0;

    /* Loop counter that goes for 0 to 12 and generates the degree angles */
    for (j = 0; j <= N; j++) {
        degree = 5.0 * j;
        rad = degtorad(degree);
        tan_vals[j] = tan(rad);
    }

    /* Printing the global array */
    for (j = 0; j <= N; j++) {
        printf("tan_vals[%d] = %lf\n", j, tan_vals[j]);
    }

    double area = tan_area(N);
    printf("Calculated area under tan(x) from 0 to 60 degrees: %.6f\n", area);

    printf("This is the exact same answer we see in practical 3, but here the area is calculated in a difference code block, and called in main.\nDoing this makes it a little easier to debug and interpret by splitting the program into specific units.");

    return 0;
}