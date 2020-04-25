/*

Program 1: Write a Program that prints the Series of palindrome ranging in m to n.


*/

#include <stdbool.h>

extern int printf (const char *, ...);
extern int scanf (const char * , ...);

void reverse (int * x) {
    int rev = 0;
    while (*x != 0) {
        rev = rev * 10 + *x % 10;
        *x /= 10;
    }
    *x = rev;
}


bool isPalindrome (int x) {
    int y = x;
    reverse (&x);
    if (x == y) {
        return true;
    } else {
        return false;
    }
}


void main (void) {  
    
    int x, y, rev;

    printf ("\nEnter lower limit : ");
    scanf ("%d", &x);

    printf ("\nEnter upper limit : ");
    scanf ("%d", &y);

    printf ("\nPalindrome numbers from %d to %d are : \n\n", x, y);

    for (int i = x; i < y + 1; i++) {
        if (isPalindrome (i)) {
            printf ("%d ", i);
        }
    }

}
