/*

Program 5: Write a Program that takes Height (h) & Base (b) of a Triangle and
           calculates area (A) of that Triangle.


*/

# include <stdio.h>

void main (void) {
    
    int height, base;
    
    printf ("\nEnter Height of Triangle : ");
    scanf ("%d", &height);
    
    printf ("\nEnter Base of Triangle : ");
    scanf ("%d", &base);

    printf ("\nThe Area of Triangle = %.1f sq.units\n", 0.5 * height * base);

}
