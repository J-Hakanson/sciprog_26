#include <stdio.h>

// iterative GCD algorithm from given pseudocode
int GCD(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// recursive GCD algorithm from given pseudocode
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
}

int main(void) {
    int x = 8;
    int y = 12;

    int GCD_iterative = GCD(x, y);
    int gcd_recursive  = gcd(x, y);

    // printing results to see
    printf("GCD using iterative algorithm (%d, %d) = %d\n", x, y, GCD_iterative);
    printf("GCD using recursive algorithm (%d, %d) = %d\n", x, y, gcd_recursive);
    

    return 0;
}