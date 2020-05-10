/*

Program 5: Write a Program that accepts N numbers from user and calculates
           Variance of those numbers and standard deviation also.


*/

# include <stdio.h>
# include <math.h>


void main (void) {

    float sum = 0, y, var, avg, arr [20];
    int x, cnt, i = 0;
    
    printf ("\nEnter count of Numbers : ");
    scanf ("%d", &x);
    
    cnt = x;

    printf ("\nEnter values : ");

    while (x != 0) {
        scanf ("%f", &y);
        arr [i++] = y;
        sum += y;
        x--;
    }

    avg = sum / cnt;

    for (int i = 0; i < cnt; i++) {
        var += ((arr [i] - avg) * (arr [i] - avg)) / cnt;
    }

    printf ("\nAverage = %.2f ", avg);
    printf ("\nVariance = %.2f ", var);
    printf ("\nStandard Deviation = %.2f\n", sqrt (var));
    
}
