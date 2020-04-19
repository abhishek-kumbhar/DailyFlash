/*

Program 3: Write a Program to find radius of a circle if user provides
           circumference of that same circle.


*/
extern int printf (const char *, ...);
extern int scanf (const char *, ...);

#define PI 3.14

void main (void) {
    
    float circumference;
    
    printf ("\nEnter circumference : ");
    scanf ("%f", &circumference);
    
    printf ("\nThe radius of circle is %.0f", circumference / (2 * PI));

}   
