/*

Program 2: Write a Program to check whether the number ins Negative,
           Positive or equal to Zero. 

*/


extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    int x;
    printf ("\nEnter a number : ");
    scanf ("%d", &x);

    if (x > 0) {
        printf ("\n%d is Positive Number", x);
    } else if (x < 0) {
        printf ("\n%d is Negative Number", x);
    } else {
        printf ("\nIt is Zero");
    }
}

/* Alternatives 

1 -> Using Ternary Operator :
     (x > 0) ? positive no : (x == 0) ? it is zero : negative no


*/


