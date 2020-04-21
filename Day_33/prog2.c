/*

Program 2: Write a Program that prints Hexadecimal value of Each Digit from entered Number.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void reverse (int * x) {
    int rev = 0;
    while (*x != 0) {
        rev = rev * 10 + *x % 10;
        *x /= 10;
    }
    *x = rev;
}

void main (void) {

    int x;

    printf ("\nEnter a number : ");
    scanf ("%d", &x);

    reverse (&x);

    while (x != 0) {
        printf ("\nHexadecimal of %d = %d", x % 10, x % 10); // hexadecimal numbers from 0 - 9 are same as decimal.
        x /= 10;
    }

}
