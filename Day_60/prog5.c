/*

Program 5: Write a Program calculate period of a simple pendulum (T) if user
           provides the Length of pendulum in (L) in meters.
        
           {Steps: To calculate Period of simple pendulum we can use formula
                T = 2π * √L/g
                Where,
                  L: is length of pendulum in Meters.
                  g: is acceleration but we can simply use gravitation constant
                     since gravitational force acts on it. So (g = 9.81).
                     π = 3.142
           }


*/

# include <stdio.h>
# include <math.h>

# define PI 3.142
# define g 9.81

void main (void) {
    
    float length, period;
    
    printf ("\nEnter Length of Pendulum (in meter) : ");
    scanf ("%f", &length);
    
    period = 2 * PI * sqrt ((length / g));

    printf ("\nThe period of pendulum = %.3f seconds.\n", period);

}
