/*

Program 3: Write a Program that computes & prints Cubes of numbers entered
           by user using do while loop until user enters a negative number.


*/

# include <stdio.h>

void main (void) {
    
    int x;
    
    do {
        printf ("\nEnter a number : ");
        scanf ("%d", &x);
        if (x < 0) {
            printf ("\nExiting ... You entered Negative Number.\n");
            return;
        }

        printf ("%d * %d * %d = %d\n", x, x, x,  x * x * x);
    
    } while (1);

}
