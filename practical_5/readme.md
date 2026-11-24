This week's practical contains two exercises. The first one takes some integer from the user using the scanf function, and prints out the Fibonacci series up to the given integer. This exercise is in the file "practical_5_1.c". The second exercise is located in the file "practical_5_2.c". This code calculates the hyperbolic arctangent using two methods. One is a function of the Maclaurin series, and the other is a natural logarithm formula. It takes a user input (delta) and the Maclaurin stops when an element in the series is less than this number. It should be noted that this delta must be less than one, otherwise the arctanh from this method gives 0. Both results are printed cycling through [−0.9,0.9] and sampled every 0.01 and the accuracy is compared. The difference is never less than 0.15, so it is safe to say that both are accurate representations.







This code can be run by executing the following commands in your terminal:

gcc -o practical_5_1 practical_5_1.c

./practical_5_1

For the first exercise and 

gcc -o practical_5_2 practical_5_2.c

./practical_5_2