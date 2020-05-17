/*

Program 5: Write a Program calculate Length (L) of a simple pendulum if user
           provides the period (T) of that pendulum in seconds.


*/

# include <stdio.h>
# include <math.h>

#define PI 3.142
#define g 9.81

void main (void) {
    
    float length, period;
    
    printf ("\nEnter Period of pendulum (in seconds) : ");
    scanf ("%f", &period);
    
    length = g * (period * period) / (4 * (PI * PI));

    printf ("\nThe length of pendulum = %.2f meter\n", length);


}
