/*

Program 2: Write a Program to Convert entered Decimal Number to
           Hexadecimal Numberi


*/


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



int decToHex (int dec) {
    int a = checkIsDecimal (dec);
    if (a == false) {
        return -1;
    }

    int i = 0;
    char hexNum [20];
    
    while (dec != 0) {
        hexNum [i++] = dec % 16 < 10 ? (48 + dec % 16) : (55 + dec % 16);
        dec /= 16;
    }
    
    hexNum [i] = '\0';

    printf ("\nHexadecimal number = ");
    for (int k = i - 1; k > -1; k--) {
        printf ("%c", hexNum [k]);
    }
    return 1;
}



void main (void) {

    int dec;
    
    printf ("\nEnter Decimal number : ");
    scanf ("%d", &dec);

    int x = decToHex (dec);
    
    x == -1 ? printf ("\nPlease enter valid Decimal number.\n") : 1;

}
