/*

Program 1: Write a program that accepts two integers from user and prints
           Multiplication & Division of them.
            {Note: checks for smaller divisor amongst entered number while computing division}


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {

    int x, y;
    
    printf("\nEnter 2 numbers : ");
    scanf("%d%d", &x, &y);

    printf("\nMultiplication is %d ", x * y);
    
    (x > y) ? y == 0 ? printf ("\nDenominator can't be Zero") : printf("\nDivision is %d ", x / y) : printf("\nDivision will NOT performed.");

}
