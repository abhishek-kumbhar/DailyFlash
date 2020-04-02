/*

Program 5: Write a Program that calculates addition of two complex numbers.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x, x1, y, y1;
    
    printf("\nEnter no 1's real part : ");
    scanf("%d", &x);
    printf("\nEnter no 1's imaginary part : ");
    scanf("%d", &x1);
    
    printf("\nEnter no 2's real part : ");
    scanf("%d", &y);
    printf("\nEnter no 2's imaginary part : ");
    scanf("%d", &y1);

    printf("\nThe Addition of %d + %di & %d + %di is %d + %di", x, x1, y, y1, x + y, x1 + y1);

}
