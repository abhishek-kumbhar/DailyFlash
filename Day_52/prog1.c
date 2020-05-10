/*

Program 1: Write a Program that print multiplication of Series up to nth length if user provides length.

Series:  1^1 * 2^2 * 3^3 * ... * n^n


*/


# include <stdio.h>
# include <math.h>

void main (void) {
    
    int x, mult = 1;

    printf ("\nEnter length of series : ");
    scanf ("%d", &x);

    for (int i = 1; i < x + 1; i++) {
        mult *= pow (i, i);
    }

    printf ("\nThe multiplication of Series of length %d = %d\n", x, mult);

}

