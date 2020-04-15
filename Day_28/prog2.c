/*

Program 2: Write a Program to Convert entered Hexadecimal Number to
Binary Number.

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


unsigned long long int decToBin (int dec) {
    long long int bin = 0, i = 1;
    while (dec != 0) {
        bin += dec % 2 * i;
        dec /= 2;
        i *= 10;
    }
    return bin;
}


long long int hexToBin (char hex []) {
    bool a = checkIsHexadecimal (hex);
    if (a == false) {
        return 2;
    }
    
    int dec = hexToDec (hex);
    unsigned long long int bin = decToBin (dec);

    return bin;

}

void main (void) {  
    
    char hex [20];

    printf ("\nEnter Hexadecimal number : ");
    scanf ("%s", hex);
    
    unsigned long long int bin = hexToBin (hex);

    bin != 2 ? printf ("\nBinary number : %llu\n", bin) : printf ("\nEnter valid Hexadecimal Number.\n");

}
