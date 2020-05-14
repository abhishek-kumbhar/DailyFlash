/*

Program 3: Write a Program that accepts a number from user and swaps that
           first element with last, second with second last and so on.


*/

# include <stdio.h>

void printArray (int array [], int x) {
    for (int i = 0; i < x; i++) {
        printf ("%d ", array [i]);
    }

}

void main (void) {
    
    int cnt, array [20];
    
    printf ("\nEnter Length of array : ");
    scanf ("%d", &cnt);

    printf ("\nEnter the elements of Array : ");

    for (int i = 0; i < cnt; i++) {
        scanf ("%d", &array [i]);
    }
    
    printf ("\nArray before swapping : ");
    
    printArray (array , cnt);
        
    for (int i = 0; i < cnt / 2; i++) {
        array [i] = array [i] + array [cnt - i - 1] - (array [cnt - i - 1] = array [i]);
    }

    printf ("\nArray after swapping  : ");
    
    printArray (array , cnt);
    
}
