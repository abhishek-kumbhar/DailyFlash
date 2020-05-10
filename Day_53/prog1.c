/*
 
Program 1: Write a Program that print Addition of Series up to nth length if
           user provides length.

Series: 1^1*0 + 2^2*1 + 3^3*2 + … + n^n*n-1

*/

# include <stdio.h>
# include <math.h>

void main (void) {
    
    int x, sum = 0;

    printf ("\nEnter length of Series : ");
    scanf ("%d", &x);

    for (int i = 1; i < x + 1; i++) {
        sum += pow (i, i * (i - 1));
    }

    printf ("\nThe addition of Series of length %d = %d\n", x, sum);

}
