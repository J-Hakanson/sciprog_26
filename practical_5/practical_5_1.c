#include <stdio.h>


/* function that takes the last 2 sequence numbers */
/* using pointer values so they're changed during the function */
void fib_n(int *fib_p1, int *fib_p2) {
    int f_next;

    f_next = (*fib_p1) + (*fib_p2);
    *fib_p2 = *fib_p1;
    *fib_p1 = f_next;
}

int main(void){
    int n;

    /* getting value from user for n */
    printf("Enter some integer value n:\n");
    scanf("%d", &n);

    int i;

    /* initial F_n-2 and F_n-1 values*/
    int fib_p2 = 0;
    int fib_p1 = 1;

    printf("The Fibonacci sequence from F_0 to F_%d is:", n);

    /* printing F_0 and F_1 if n is big enough */
    if (n >= 0) {
        printf("%d", fib_p2);
    }
    if (n >= 1) {
        printf(" %d", fib_p1);
    }

    /* Loop that uses the earlier funtion to find and print each number of the sequence */
    for (i = 2; i <= n; i++) {
        fib_n(&fib_p1, &fib_p2);
        printf(" %d", fib_p1);

    }
    return 0;
}