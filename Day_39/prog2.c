/*

Program 2: Write a Program that calculates radius of a circle if user provides
           the area covered by that circle.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);
double sqrt (double);

void main (void) {
    
    float area;
    
    printf ("\nEnter area of Cirle : ");
    scanf ("%f", &area);
    
    printf ("\nRadius of Circle = %.1f\n", sqrt (area / 3.14));

}
