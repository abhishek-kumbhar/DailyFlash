/*
 
Program 1: Write a Program that print Addition of Series up to nth length if
           user provides length.

Series:    1/(x+y)^1*1! + 1/(x+y)^2*2! + 1/(x+y)^3*3! + ... + 1/(x+y)^n*n!


*/

# include <stdio.h>
# include <math.h>

int fact (int i) {
    return i == 1 || i == 0 ? 1 : i * fact (i - 1);
}

void main (void) {
    
    int n, x, y;
    float sum = 0;
    
    printf ("\nEnter length of Series : ");
    scanf ("%d", &n);

    printf ("\nEnter X : ");
    scanf ("%d", &x);
    
    printf ("\nEnter Y : ");
    scanf ("%d", &y);

    for (int i = 1; i < n + 1; i++) {
        sum += (float) 1 / pow((x+y), i) * fact (i);
    }

    printf ("\nThe addition of Series of length %d = %.2f", n, sum);

}
