/*
  
Program 2: Write a Program to Convert entered Decimal Number to Octal Number


*/

// Compile with ( -lm ) flag if not compiled succesfully due to <math.h> library.

#include <stdbool.h>

extern int printf (const char *, ...);
extern int scanf (const char *, ...);
double pow (double, double);


bool checkIsDecimal (int dec) {
    while (dec != 0) {
        int k = dec % 10;
        dec /= 10;
        if (k < 0) {
            return false;
        }
    }
    return true;
}


int decToOct (int dec) {
    int a = checkIsDecimal (dec);
    if (a == false) {
        return -1;
    }
    int i = 0, oct = 0;
    while (dec != 0) {
        oct += dec % 8 * pow (10, i++);
        dec /= 8;
    }
   return oct;
}


void main (void) {

    int dec;
    
    printf ("\nEnter Decimal number : ");
    scanf ("%d", &dec);

    int oct = decToOct (dec);
    
    oct != -1 ? printf ("\nOctal number = %d\n", oct) : printf ("\nPlease enter valid Decimal number.\n");
    
}
