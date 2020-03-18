/*
 
Program 5: Write a Program to check whether the number is divisible by 5 &
           11 or not.

*/


extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    int x;
    printf ("\nEnter a number : ");
    scanf ("%d", &x);
    
    if (x % 5 == 0 && x % 11 == 0) {
        printf ("\n%d is Divisible by 5 & 11\n", x);
    } else {
        printf ("\n%d is NOT Divisible by 5 & 11\n", x);
    }
}

/* Alternatives 

1 -> Using Ternary Operator :
     x % 5 == 0 && x % 11 == 0 ? Divisible : NOT Divisible


*/


