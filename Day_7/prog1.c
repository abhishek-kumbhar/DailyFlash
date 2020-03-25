/*

Program 1: Write a program to print squares of first n numbers.


*/


extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x;

    printf ("\nEnter a Number : ");
    scanf ("%d", &x);

    printf ("\nThe Squares of first %d numbers : \n", x);

    for (int i = 1; i < x + 1; i++) {
        printf("\nSquare of %2d : %3d", i, i * i);
    }

}
