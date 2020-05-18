/*
 
Program 3: Write a Program that accepts a Array on Length N from user and
           prints multiplication of all odd elements from that array.


*/

# include <stdio.h>

void main (void) {
    
    int x, array [20], mult = 1;
    
    printf ("\nEnter Length of array : ");
    scanf ("%d", &x);

    printf ("\nEnter the elements of Array : ");

    for (int i = 0; i < x; i++) {
        scanf ("%d", &array [i]);
        if (array [i] % 2 == 1) {
            mult *= array [i];
        }
    }
    
    printf ("\nMultiplication of Odd elements from array = %d\n", mult);

}
