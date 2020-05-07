/*

Program 1: Write a Program that print multiplication of Series up to nth length if user provides length.

Series : (1+1) * (2+2) * (3+3) * ... * (n+n).


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {

    int x, sum = 1;

    printf ("\nEnter no of terms : ");
    scanf ("%d", &x);

    for (int i = 1; i < x + 1; i++) {
        sum *= i + i;
    }

    printf ("\nThe multiplication of Series of length %d = %d\n", x, sum);


}   
