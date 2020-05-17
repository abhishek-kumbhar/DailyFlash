/*
 
Program 3: Write a Program that accepts an Array on Length N from user and
           sorts that array in ascending order.


*/

# include <stdio.h>

void main (void) {
    int x, array [20], mult = 1;
    
    printf ("\nEnter Length of array : ");
    scanf ("%d", &x);

    printf ("\nEnter the elements of Array : ");

    for (int i = 0; i < x; i++) {
        scanf ("%d", &array [i]);
    }
    
    for (int i = 0; i < x; i++) {
        for (int j = i; j < x; j++) {
            if (array [i] > array [j]) {
                array [i] = array [i] + array [j] - (array [j] = array [i]);
            }
        }
    }

    printf ("\nArray after Sorting operation : ");

    for (int i = 0; i < x; i++) {
        printf ("%d ", array [i]);
    }

}
