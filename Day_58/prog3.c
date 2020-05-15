/*

Program 3: Write a Program that accepts a Array on Length N from user and
           prints square of every odd elements from that array.


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
    
   printf ("\nSquares of every Odd elements from array : ");

   for (int i = 0; i < x; i++) {
       if (array [i] % 2 == 1) {
           printf ("%d ", array [i] * array [i]);
       }
   }

}
