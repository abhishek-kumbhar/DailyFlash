/*
 
Program 1: Write a Program that print Addition of Series up to nth length if
           user provides length.

Series: 1/ (x + y)^ + 2/ (x + y)^2 + 3/ (x + y)^3 + ... + n/ (x + y)^n


*/

# include <stdio.h>
# include <math.h>

void main (void) {
    
    int n, x, y;
    float sum = 0;

    printf ("\nEnter length of Series : ");
    scanf ("%d", &n);

    printf ("\nEnter X & Y : ");
    scanf ("%d%d", &x, &y);

    for (int i = 1; i < n + 1; i++) {
        sum += i / pow (x + y, i );
    }

    printf ("\nThe addition of Series of length %d = %.1f\n", x, sum);
    
}
