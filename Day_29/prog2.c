    /*

Program 2: Write a Program to Convert entered Hexadecimal Number to Octal Number.


*/


// Compile with ( -lm ) flag if not compiled succesfully due to <math.h> library.

#include <stdbool.h>

extern int printf (const char *, ...);
extern int scanf (const char *, ...);
double pow (double, double);


bool checkIsHexadecimal (char hex []) {
    int i = 0;
    while (hex [i] != 0) {
        int k = (int) hex [i++];
        if (k < 48 || k > 57 && k < 65 || k > 70) {
            return false;
        }
    }
    return true;
}

int hexToDec (char hex []) {
    int i = 0, j= 0, dec = 0;

    while (hex [i + 1] != 0) {
        i++;
    }

    while (i > -1) {
        int x = (int) hex [i--];
        if (x > 47 && x < 58) {
            dec += (x - 48) * pow (16, j++);
        } else {
            dec += (x - 55) * pow (16, j++);
        }
    }    
    return dec;

}


int decToOct (int dec) {
    int i = 0, oct = 0;
    while (dec != 0) {
        oct += dec % 8 * pow (10, i++);
        dec /= 8;
    }
   return oct;
}



int hexToOct (char hex []) {
    bool a = checkIsHexadecimal (hex);
    if (a == false) {
        return -1;
    }
    
    int dec = hexToDec (hex);
    int oct = decToOct (dec);

    return oct;

}

void main (void) {  

    char hex [20];

    printf ("\nEnter Hexadecimal number : ");
    scanf ("%s", hex);
    
    int oct = hexToOct (hex);
    oct != -1 ? printf ("\nOctal number = %d\n", oct) : printf ("\nEnter valid Hexadecimal Number.\n");

}
