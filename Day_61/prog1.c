/*
 
Program 1: Write a Program that print Addition of Series up to nth length if
           user provides length.

Series:    1/1! + 2/2! + 3/3! + ... + n/n!


*/

# include <stdio.h>

int fact (int i) {
    return i == 0 ? 1 : i * fact (i - 1);
}

void main (void) {
    
    int n;
    float sum = 0;
    
    printf ("\nEnter length of Series : ");
    scanf ("%d", &n);

    for (int i = 1; i < n + 1; i++) {
        sum += i / fact (i);
    }

    printf ("\nThe addition of Series of length %d = %.1f", n, sum);

}
