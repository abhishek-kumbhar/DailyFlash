/*

Program 3: Write a Program that accepts a number from user and prints
           Minimum element from that array.


*/

# include <stdio.h>

int findMinFromArray (int array [], int i) {
    int min = array [0];
    for (int j = 0; j < i; j++) {
        if (array [j] < min) {
            min = array [j];
        }
    }
    return min;
}

void main (void) {
    
    int x, array [20], i = 0;
    float sum = 0;
    
    printf ("\nEnter Length of array : ");
    scanf ("%d", &x);

    printf ("\nEnter the elements of Array : ");

    while (x != 0) {
        scanf ("%d", &array [i++]);
        x--;
    }
    
    printf ("\nMin from Array = %d\n", findMinFromArray (array, i));

}


