This practical has two exercises. The first one is in the file "practical_1_2_1.c". This code takes some integer, finds the amount of binary digits in the number, then prints that, the original number, the number as a float, and the number in binary digits. I was a little confused on exactly what to do for this exercise, I just finished the conversion.c file. One of the numbers given is 33554431, which has 25 binary digits. A float/real can represent 24 binary digits, which shows us how inaccurate some of the algebra with these types can be. 


To run this code, execute the following commands in your terminal:

gcc -o executable practical_1_2_1.c

./executable


The second exercise is in the file "practical_1_2_2.c". This one completes the following sum in two different ways:

$1 + \frac{1}{2} + \frac{1}{3} + \frac{1}{4} + ... + \frac{1}{1000}$

The first way starts with 1 and moves up to $\frac{1}{1000}$ and the second starts with $\frac{1}{1000}$ and moves backwards. The code then prints the two sums and the difference between them. The answer to question 3 of this exercise is located in the comments of this code at the end. 

To run this code, execute the following commands in your terminal:

gcc -o executable practical_1_2_2.c

./executable
