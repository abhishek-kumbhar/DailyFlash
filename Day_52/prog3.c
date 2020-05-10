/*
 
Program 3: Write a Program that accepts a number from user and stores every
           digit from that number in reverse order into an array. 

*/

# include <stdio.h>

void main (void) {
    
    int x, array [20], i = 0, j = 0;
    
    printf ("\nEnter a number : ");
    scanf ("%d", &x);

    while (x != 0) {
        array [i++] = x % 10;
        x /= 10;
    }
    
    printf ("\nNumber stored in Array : ");
    
    while (j != i) {
        printf ("%d ", array [j++]);
    }
    
}
