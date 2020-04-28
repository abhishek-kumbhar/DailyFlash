/*

Program 1: Write a Program that prints whether a number entered by user is
           Disarium Number or not.

          {Note: A number can be termed as Disarium number if the sum of every digits
           raised by their position in that number is equal to that number. E.g. 135, 1 is at
           position 1, 3 is at position 2 & 5 is at position 3, then 1^1 + 3^2 + 5^3 = 1 + 9 +
           125 = 135, so 135 is a Disarium Number}


*/

# include <stdbool.h>

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


bool isDisarium (int x) {
    int y = x;
    reverse (&x);
    int sum = 0, i = 1;
    while (x != 0) {
        sum += pow (x % 10, i++);
        x /= 10;
    }

    if (sum == y) {
        return true;
    } else {
        return false;
    }
}


void main (void) {

    int x;

    printf ("\nEnter a number : ");
    scanf ("%d", &x);

    if (isDisarium (x)) {
        printf ("\n%d is a Disarium number.\n", x);
    } else {
        printf ("\n%d is NOT Disarium number.\n", x);
    }
   
}
