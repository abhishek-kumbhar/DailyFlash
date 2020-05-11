/*
 
Program 1: Write a Program that print Addition of Series up to nth length if
           user provides length.

Series:  1/√1*2 + 2/√2*3 + 3/√3*4 + ... + n/√n*n+1

*/


# include <stdio.h>
# include <math.h>

void main (void) {
    
    int x;
    float sum = 0;

    printf ("\nEnter length of Series : ");
    scanf ("%d", &x);

    for (int i = 1; i < x + 1; i++) {
        sum += i / sqrt (i * (i + 1));
    }

    printf ("\nThe addition of Series of length %d = %.2f\n", x, sum);

}
