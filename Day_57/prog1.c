/*
 
Program 1: Write a Program that coverts entered angle in degree to radians.


*/


# include <stdio.h>

# define PI 3.142

void main (void) {
    
    float angle;

    printf ("\nEnter angle in Degree : ");
    scanf ("%f", &angle);

    printf ("\nIn Radians : %.3f\n", angle * PI / 180);

}
