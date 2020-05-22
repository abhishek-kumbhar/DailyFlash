/*
 
Program 5: Write a Program to calculate Period of a Simple Pendulum (T) if
           user provides the Frequency (F) of that pendulum in Hz. 
        

*/


# include <stdio.h>


void main (void) {
    
    float freq;
    
    printf ("\nEnter Frequency of Pendulum (in Hz) : ");
    scanf ("%f", &freq);

    printf ("\nPeriod of pendulum = %.2f seconds\n", 1 / freq);


}
