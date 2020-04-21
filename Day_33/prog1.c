/*

Program 1: Write a Program that computes Cartesian space value of a point
           P(x, y) if user provides that radius and angle of that point in Polar coordinates space.
           
           {Note: Considered 2D polar space then x & y values for Cartesian space
            computed as, x = r * cos (θ) & y = r * sin (θ)}


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);
double sin (double);
double cos (double);

void main (void) {
    
    double angle, radius, var = 0.0174533;
    
    printf ("\nEnter angle : ");
    scanf ("%lf", &angle);
    
    printf ("\nEnter radius : ");
    scanf ("%lf", &radius);
    
    printf ("\nX = %.2f & Y = %.2f", radius * cos(angle * var), radius * sin(angle * var));

}

