/*

Program 3: Write a Program to Find whether the number Is Even or Odd. 

*/


extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    int x;
    printf ("\nEnter a number : ");
    scanf ("%d", &x);

    if (x % 2 == 0) {
        printf ("\n%d is Even number\n", x);
    } else {
        printf ("\n%d is Odd number\n", x);
    }
}

/* Alternatives 

1 -> Using Ternary Operator :
    x % 2 == 0 ? Even no : Odd no


*/


