/*

Program 2: Write a Program to Convert entered Decimal Number to Binary Number


*/

// Compile with ( -lm ) flag if not compiled succesfully due to <math.h> library.

#include <stdbool.h>

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

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


unsigned long long int decToBin (int dec) {
    int a = checkIsDecimal (dec);
    if (a == false) {
        return 2;
    }
    unsigned long long int bin = 0;
    long int i = 1;
    while (dec != 0) {
        bin += dec % 2 * i;
        dec /= 2;
        i *= 10;
    }
    return bin;
}


void main (void) {

    int dec;
    
    printf ("\nEnter Decimal number : ");
    scanf ("%d", &dec);

    unsigned long long int bin = decToBin (dec);
    
    bin != 2 ? printf ("\nBinary number = %llu\n", bin) : printf ("\nPlease enter valid Decimal number.\n");
}
