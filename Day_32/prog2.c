/*

Program 2: Write a Program that prints Binary of Each Digit from entered Number.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);
double pow (double, double);

void reverse (int * x) {
    int rev = 0;
    while (*x != 0) {
        rev = rev * 10 + *x % 10;
        *x /= 10;
    }
    *x = rev;
}

long int getBinary (int x) {
    long int bin = 0;
    int i = 0;
    while (x != 0) {
        bin += x % 2 * pow (10, i++);
        x /= 2;
    }
    return bin;
}

void main (void) {

    int x;

    printf ("\nEnter a number : ");
    scanf ("%d", &x);

    reverse (&x);

    while (x != 0) {
        printf ("\nBinary of %d = %ld", x % 10, getBinary (x % 10));
        x /= 10;
    }


}
