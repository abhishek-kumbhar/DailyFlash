/*
 
Program 3: Write a Program that accepts two Array of Length N from user and
           Swaps the elements of same index from both array.
    
           
*/

# include <stdio.h>

void operate (int array1 [], int array2 [], int n) {
    for (int i = 0; i < n; i++) {
        array2 [i] = array1 [i] + array2 [i] - (array1 [i] = array2 [i]); 
    }
}

void printArray (int array [], int n) {
    for (int i = 0; i < n; i++) {
        printf ("%d ", array [i]);
    }
}

void getArray (int array [], int n) {
    for (int i = 0; i < n; i++) {
        scanf ("%d", &array [i]);
    }
}

void main (void) {
    
    int x, array1 [20], array2 [20], array3 [20];
    
    printf ("\nEnter Length of array : ");
    scanf ("%d", &x);

    printf ("\nEnter the elements of 1st Array : ");
    getArray (array1, x);
    
    printf ("\nEnter the elements of 2nd Array : ");
    getArray (array2, x);

    operate (array1, array2, x);
        
    printf ("\nArray 1 after Operation  : ");
    printArray (array1, x);

    printf ("\nArray 2 after Operation  : ");
    printArray (array2, x);


}
