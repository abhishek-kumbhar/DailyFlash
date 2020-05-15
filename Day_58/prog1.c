/*
 
Program 1: Write a Program that print Addition of Series up to nth length if
           user provides length.
           where x, y are the numbers entered by user, and a can be x if n is odd & y if n
           is even.

Series:    1/(x+y)^x + 2/(x+y)^y + 3/(x+y)^x + ... + n/(x+y)^a


*/

# include <stdio.h>
# include <stdlib.h>

void main (void) {
    
    int n, x, y;
    float sum = 0;

    printf ("\nEnter length of Series : ");
    scanf ("%d", &n);

    printf ("\nEnter X & Y : ");
    scanf ("%d%d", &x, &y);

    for (int i = 1; i < n + 1; i++) {
        if (i % 2 == 1) {
            sum += i / pow (x + y, x);
        } else {
            sum += i / pow (x + y, y);
        }
        
    }

    printf ("\nThe addition of Series of length %d = %.1f\n", x, sum);
    
}
