/*

Program 2: Write a Program that prints the user entered numbers until user
           enters 0. Use Do-While Statement for implementation of code.


*/

# include <stdio.h>

void main (void) {
    
    int num, x = 0;
    
    do {
        if (x > 0) {
            printf ("%d\n", num);
        }
        printf ("\nEnter a number : ");
        scanf ("%d", &num);
        x = 1;
    } while (num != 0);

}
