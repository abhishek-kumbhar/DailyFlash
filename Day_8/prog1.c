/*

Program 1: Write a program that accepts two integers from user and prints
           addition & Subtraction of them.
            {Note: checks for greater number to subtracts with while subtracting numbers}


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {

    int x, y;
    
    printf("\nEnter 2 numbers : ");
    scanf("%d%d", &x, &y);

    printf("\nAddition is %d ", x + y);
    
    (x > y) ? printf("\nSubstraction is %d ", x - y) : printf("\nSubstraction will NOT performed.");

}
