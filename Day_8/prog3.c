/*

Program 3: Write a program that accepts two integers from user and prints
           addition of their Cubes and subtraction of their Squares.

*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x, y;
    
    printf("\nEnter 2 numbers : ");
    scanf("%d%d", &x, &y);

    printf("\nAddition of %d & %d is %d ", x * x * x, y * y * y, (x * x * x + y * y * y));
    printf("\nSubstraction of %d & %d is %d ", x * x, y * y, (x * x - y * y));
}
