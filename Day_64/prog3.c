/*
 
Program 3: Write a Program that accepts two Array of Length N from user and
           Computes multiplication of elements at same index from those array and
           stores that multiplication into third array at the same index, Print the third array.


*/

# include <stdio.h>


void operate (int array1 [], int array2 [], int array3 [], int n) {
    for (int i = 0; i < n; i++) {
        array3 [i] = array1 [i] * array2 [i];
    }
}

void main (void) {
    
    int x, array1 [20], array2 [20], array3 [20];
    
    printf ("\nEnter Length of array : ");
    scanf ("%d", &x);

    printf ("\nEnter the elements of 1st Array : ");

    for (int i = 0; i < x; i++) {
        scanf ("%d", &array1 [i]);
    }
    
    printf ("\nEnter the elements of 2nd Array : ");

    for (int i = 0; i < x; i++) {
        scanf ("%d", &array2 [i]);
    }

    operate (array1, array2, array3, x);
        
    printf ("\nArray after Operation of Elements in 3rd array : ");

    for (int i = 0; i < x; i++) {
        printf ("%d ", array3 [i]);
    }

}
