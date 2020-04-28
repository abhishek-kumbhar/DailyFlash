/*

Program 2: Write a Program that calculates diameter of a circle if user provides
           circumference of the same circle. {Note: π = 3.142}


*/


extern int printf (const char *, ...);
extern int scanf  (const char *, ...);

#define PI 3.14

void main (void) {
    
    double cir;
    
    printf ("\nEnter circumference : ");
    scanf ("%lf", &cir);
    
    printf ("\nDiameter of that circle = %.0lf", cir / PI);

}
