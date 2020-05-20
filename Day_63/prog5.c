/*

Program 5: Write a Program calculate acceleration (g) of a simple pendulum if user
           provides the period (T) & Length (L) of that pendulum in seconds.
        


*/

# include <stdio.h>

#define PI 3.142

void main (void) {
    
    float length, period, g;
    
    printf ("\nEnter Period of pendulum (in seconds) : ");
    scanf ("%f", &period);
    
    printf ("\nEnter length of pendulum (in meter) : ");
    scanf ("%f", &length);
    
    g = (4 * length * (PI * PI)) / (period * period);
    
    printf ("\nAcceleration of that pendulum  : %.2f m/s^2\n", g);


}
