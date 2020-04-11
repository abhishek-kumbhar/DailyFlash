/*

    Program 2: Write a Program to Convert entered Octal Number to Binary Number.
    

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

unsigned long long int decToBin (int dec) {
    unsigned long long int bin = 0;
    long int i = 1;
    while (dec != 0) {
        bin += dec % 2 * i;
        dec /= 2;
        i *= 10;
    }
    return bin;
}



unsigned long long int octToBin (int oct) {
    int a = checkIsOctal (oct);
    if (a == false) {
        return 2;
    } 

    int dec = octToDec (oct);
    unsigned long long int bin = decToBin (dec);

    return bin;
}

void main (void) {

    int oct;
    
    printf ("\nEnter Octal number : ");
    scanf ("%d", &oct);

    unsigned long long int bin = octToBin (oct);
    
    bin != 2 ? printf ("\nBinary number = %llu\n", bin) : printf ("\nPlease enter valid Octal number.\n");

}
