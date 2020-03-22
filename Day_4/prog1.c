/*
 
Program 1: Write a Program to calculate area of circle. 


*/

extern int printf(const char *, ...);
extern int scanf(const char *, ...);

#define PI 3.14

void main (void) {

    int radius;

    printf("\nEnter radius : ");
    scanf("%d", &radius);

    printf("\nArea of Cicrle is : %.2f\n", PI * radius * radius);
    
}
