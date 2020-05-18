/*
 
Program 1: Write a Program that print Addition of Series up to nth length if
           user provides length.

Series:    1/1! + 1/2! + 1/3! + ... + 1/n!


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
        sum += 1.0 / fact (i);
    }

    printf ("\nThe addition of Series of length %d = %.2f", n, sum);

}
