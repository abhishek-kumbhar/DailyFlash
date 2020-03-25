/*

Program 4: Write a Program that accepts an integer from user and print Square roots of numbers 
           upto that number.

*/

extern int printf(const char *, ...);
extern int scanf(const char *, ...);
double sqrt (double);

void main (void) {
    
    int x;
    
    printf("\nEnter a number : ");
    scanf("%d", &x);

    printf ("\nSquare roots of numbers upto %d :\n", x);
    for (int i = 1; i < x + 1; i++) {
        printf("\nSqrt of %2d = %.2f", i, sqrt (i));
    }
    
}
