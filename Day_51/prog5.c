/*
 
Program 5: Write a Program that accepts N numbers from user and calculates
           Average of those numbers.


*/


# include <stdio.h>

void main (void) {
    
    float sum = 0, y;
    int x, avg = 0, cnt;
    
    printf ("\nEnter count of Numbers : ");
    scanf ("%d", &x);
    
    cnt = x;

    printf ("\nEnter values : ");

    while (x != 0) {
        scanf ("%f", &y);
        sum += y;
        x--;
    }

    printf ("\nAverage = %.1f\n", sum / cnt);
}
