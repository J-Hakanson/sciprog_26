This week's practical contains two exercises. The first one uses a formula to estimate the value of e where we set the value of x to 1. It takes input from the user for the order of the polynomial requested to sum up to, and then the estimate from this formula is compared against the real value of e. The equation we use is:

$f(x) = 1 + x + \frac{x^2}{2!} + \frac{x^3}{3!} + \frac{x^4}{x!} + ...$

The program prints the order of the polynomial, the estimate, the real value of e, and the percent error. We see that the estimate gets worse with the higher order polynomials. This is because floating-point numbers have finite precision and the arithmetic is not exact. Because we are summing multiple times, these small errors compound. 

The second exercise plays with pointers and dynamic memory allocation. It takes an integer and creates a pointer to an allocated memory block of that many integers, then uses another function to fill every cell of an array with length n with ones. The array is then printed to the screen. For the fillwithones() function we need two arguments: the pointer to the array and the array length n. This is because the sizeof() function doesn't work with dynamic arrays, so we need the integer that represents the array length.



This code can be run by executing the following commands in your terminal:

gcc -o practical_7_1 practical_7_1.c

./practical_7_1

For the first exercise and

gcc -o practical_7_2 practical_7_2.c

./practical_7_2