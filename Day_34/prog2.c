/*

Program 2: Write a Program that prints octal value of Each Digit from entered Number.


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

int getOctal (int x) {
    switch (x)
    {
    case 0 :
    case 1 :
    case 2 :
    case 3 :
    case 4 :
    case 5 :
    case 6 :
    case 7 : return x;
    case 8 : return 10;
    case 9 : return 11;
    default:
        break;
    }
}

void main (void) {

    int x;

    printf ("\nEnter a number : ");
    scanf ("%d", &x);

    reverse (&x);

    while (x != 0) {
        printf ("\nOctal of %d = %d", x % 10, getOctal (x % 10)); // Octal numbers from 0 - 7 are same as decimal.
        x /= 10;
    }

}
