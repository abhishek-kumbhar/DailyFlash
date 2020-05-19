/*
 
Program 1: Write a Program that print Addition of Series up to nth length if
           user provides length.

Series:    1*(x+y)/1! + 2*(x+y)/2! + 3*(x+y)/3! + ... + n*(x+y)/n!


*/

# include <stdio.h>

int fact (int i) {
    return i == 0 ? 1 : i * fact (i - 1);
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
        sum +=  i * (x + y)/ (float) fact (i);
    }

    printf ("\nThe addition of Series of length %d = %.1f", n, sum);

}
