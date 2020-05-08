/*
 
Program 3: Write a Program that accepts a number from user and stores every
           digit from that number into an array.


*/

# include <stdio.h>

void reverse (int * x) {
    int rem = 0;
    while (*x != 0) {
        rem = rem * 10 + *x % 10;
        *x /= 10;
    }
    *x = rem;
}

void main (void) {

    int x, array [20], i = 0, j = 0;
    
    printf ("\nEnter a number : ");
    scanf ("%d", &x);

    reverse (&x);

    while (x != 0) {
        array [i++] = x % 10;
        x /= 10;
    }
    
    printf ("\nNumber stored in array : ");
    
    while (j != i) {
        printf ("%d ", array [j++]);
    }

}
