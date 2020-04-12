/*

Program 2: Write a Program to Convert entered Octal Number to Decimal Number


*/

// Compile with ( -lm ) flag if not compiled succesfully due to <math.h> library.

#include <stdbool.h>

extern int printf (const char *, ...);
extern int scanf (const char *, ...);
double pow (double, double);

bool checkIsOctal (int oct) {
    while (oct != 0) {
        int k = oct % 10;   
        if (k < 0 || k > 7) {
            return false;
        }
        oct /= 10;
    }
    return true;
}

int octToDec (int oct) {
    int a = checkIsOctal (oct);
    if (a == false) {
        return -1;
    }
    int dec = 0, i = 0;
    while (oct != 0) {
        dec += oct % 10 * pow (8, i++);
        oct /= 10;
    }
    return dec;
}


void main (void) {

    int oct  ;
    
    printf ("\nEnter Octal number : ");
    scanf ("%d", &oct);

    int dec = octToDec (oct);
    
    dec != -1 ? printf ("\nDecimal number = %d\n", dec) : printf ("\nPlease enter valid Octal number.\n");


}
