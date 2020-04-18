/*

Program 3: Write a Program to find circumference of a Circle of radius entered by user.

           {Note: The formula to determine Circumference of Circle is 2πr. Where π = 3.142}


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

#define PI 3.14

void main (void) {
    
    int x;
    
    printf ("\nEnter the radius of Circle : ");
    scanf ("%d", &x);

    printf ("\nThe circumference of circle with radius %d is %.2f", x, PI * 2 * x);

}
