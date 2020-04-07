/*

    Program 2: Write a Program to Convert entered Binary Number to Octal Number


*/

// Compile with ( -lm ) flag if not compiled succesfully due to <math.h> library.

#include <stdbool.h>

extern int printf (const char *, ...);
extern int scanf (const char *, ...);
double pow (double, double);


bool checkIsBinary (unsigned long long int bin) {
    while (bin != 0) {
        int k = bin % 10;
        if (k != 1 && k != 0) {
            return false;
        }
        bin /= 10;
    }
    return true;
}

int binToDec (unsigned long long int bin) {
    int i = 0, dec = 0;
    while (bin != 0) {
            bin % 10 % 2 == 1 ? dec += pow (2, i++) : i++;
            bin /= 10;
        } 
    return dec;
}

int decToOctal (int dec) {
    int i = 0, oct = 0;
    while (dec != 0) {
        oct += dec % 8 * pow (10, i++);
        dec /= 8;
    }
   return oct;
}

int binToOct (unsigned long long int bin) {
    bool a = checkIsBinary (bin);
    if (a == false) {
        return -1;
    }

    int dec = binToDec (bin);
    int oct = decToOctal (dec);

    return oct;
}

void main (void) {
    
    unsigned long long int bin;
    
    printf ("\nEnter Binary number : ");
    scanf ("%llu", &bin);

    int oct = binToOct (bin);
    
    oct != -1 ? printf ("\nOctal number = %d\n", oct) : printf ("\nPlease enter valid Binary number.\n");

}
