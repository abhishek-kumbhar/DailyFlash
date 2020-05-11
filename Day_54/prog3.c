/*

Program 3: Write a Program that accepts a number from user and prints
           Maximum element from that array.


*/

# include <stdio.h>

int findMaxFromArray (int array [], int i) {
    int max = array [0];
    for (int j = 0; j < i; j++) {
        if (array [j] > max) {
            max = array [j];
        }
    }
    return max;
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
    
    printf ("\nMax from Array = %d\n", findMaxFromArray (array, i));

}

