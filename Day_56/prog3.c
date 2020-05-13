/*

Program 3: Write a Program that accepts a number from user and swaps that
           first element from that array with last element of that array.


*/

# include <stdio.h>


void main (void) {

    int x, array [20];
    
    printf ("\nEnter Length of array : ");
    scanf ("%d", &x);

    printf ("\nEnter the elements of Array : ");

    for (int i = 0; i < x; i++) {
        scanf ("%d", &array [i]);
    }
    
    printf ("\nArray before swapping : ");
    
    for (int i = 0; i < x; i++) {
        printf ("%d ", array [i]);
    }

    // x = x + y - (y = x);
    
    array [0] = array [0] + array [x - 1] - (array [x - 1] = array [0]);

    
    printf ("\nArray after swapping  : ");
    
    for (int i = 0; i < x; i++) {
        printf ("%d ", array [i]);
    }

}
