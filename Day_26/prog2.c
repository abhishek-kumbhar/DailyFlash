/*

    Program 2: Write a Program to Convert entered Octal Number to Hexadecimal Number

    
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
    int dec = 0, i = 0;
    while (oct != 0) {
        dec += oct % 10 * pow (8, i++);
        oct /= 10;
    }
    return dec;
}

void decToHex (int dec) {
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

}

int octToHex (int oct) {
    int a = checkIsOctal (oct);
    if (a == false) {
        return -1;
    } 

    int dec = octToDec (oct);
    decToHex (dec);
    
    return 1;
}

void main (void) {

    int oct  ;
    
    printf ("\nEnter Octal number : ");
    scanf ("%d", &oct);

    int x = octToHex (oct);
    
    x == -1 ? printf ("\nPlease enter valid Octal number.\n") : 1;

}
