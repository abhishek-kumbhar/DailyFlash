/*

Program 3: Write a Program that accepts a number from user and prints consecutive sum at each step &
           average of elements from that array.


*/

# include <stdio.h>

void main (void) {

    int x, array [20], i = 0, j = 0, n;
    float sum = 0;
    
    printf ("\nEnter Length of array : ");
    scanf ("%d", &x);
    
    n = x;

    printf ("\nEnter the elements of Array : ");

    while (x != 0) {
        scanf ("%d", &array [i++]);
        x--;
    }
    
    while (j != n) {
        sum += array [j++];
        printf ("\nSum @ step %d = %.1f", j, sum);
    }

    printf ("\n\nSum of Elements of Array : %.1f", sum);
    printf ("\nAvg of Elements of Array : %.1f\n", sum / n);


}

