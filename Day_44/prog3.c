/*

Program 3: Write a Program that computes & prints Factorials of numbers
           entered by user using do while loop until user enters a negative number.


*/

# include <stdio.h>

int fact (int x) {
    return x == 0 ? 1 : x * fact (x - 1);
}

void main (void) {
    
    int x;
    
    do {
        printf ("\nEnter a number : ");
        scanf ("%d", &x);
        if (x < 0) {
            printf ("\nExiting ... You entered Negative Number.\n");
            return;
        }

        printf ("%d ! = %d\n", x, fact (x));
    
    } while (1);

}

