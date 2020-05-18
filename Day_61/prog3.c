/*
 
Program 3: Write a Program that accepts an Array on Length N from user and
           calculates squares of all even elements and cubes of all odd elements from
           that array and replaces the elements respectively with the answer.


*/

# include <stdio.h>

void main (void) {
    
    int x, array [20], mult = 1;
    
    printf ("\nEnter Length of array : ");
    scanf ("%d", &x);

    printf ("\nEnter the elements of Array : ");

    for (int i = 0; i < x; i++) {
        scanf ("%d", &array [i]);
        if (array [i] % 2 == 0) {
            array [i] = array [i] * array [i];
        } else {
            array [i] = array [i] * array [i] * array [i];
        }
    }
        
    printf ("\nArray after Operation : ");

    for (int i = 0; i < x; i++) {
        printf ("%d ", array [i]);
    }

}
