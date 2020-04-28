/*

Program 1 : Write a Program that prints the Disarium Number limiting between
            bounds provided by user.


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

    int x, y;

    printf ("\nEnter lower limit : ");
    scanf ("%d", &x);

    printf ("\nEnter upper limit : ");
    scanf ("%d", &y);

    printf ("\nDisarium numbers between %d to %d are : \n\n", x, y);

    for (int i = x; i < y + 1; i++) {
        if (isDisarium (i)) {
            printf ("%d ", i);
        }
    }

   
}
