/*

Program 1: Write a Program that computes Cartesian space value of a point
           P(x, y, z) if user provides that radius, angle theta (θ) & angle phi (φ) of that
           point in Polar coordinates space.

           {Note: Considered 3D polar space then x, y, & z values for Cartesian space
            computed as, x = r * sin (θ) * cos (φ), y = r * sin (θ) * sin (φ) & z = r * cos (θ)}


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);
double sin (double );
double cos (double );

#define PI 3.14

void main (void) {
    
    int r;
    double t, p;
    
    printf ("\nEnter radius : ");
    scanf ("%d", &r);
    
    printf ("\nEnter theta angle : ");
    scanf ("%lf", &t);
    
    printf ("\nEnter phi angle : ");
    scanf ("%lf", &p);
    
    printf ("\nX = %.3f", r * sin(t * (PI / 180)) * cos (p * (PI / 180)));
    printf ("\nY = %.3f", r * sin(t * (PI / 180)) * sin(p * (PI / 180)));
    printf ("\nZ = %.3f", r * cos(t * (PI / 180)));


}
