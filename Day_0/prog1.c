/*
 
Program 1: Write a Program to Find Maximum between two numbers.

*/


extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    int x, y;
    printf ("\nEnter two numbers : ");
    scanf ("%d%d", &x, &y);

    if (x > y) {
        printf ("\n%d is Max from %d & %d\n", x, x, y);
    } else {
        printf ("\n%d is Max from %d & %d\n", y, x, y);
    }
}

/* Alternatives 

1 -> Using Ternary Operator :
    x > y ? printf () : printf ()

2 -> Using return value of Ternary Operator
    (x > y) ? x : y

*/


