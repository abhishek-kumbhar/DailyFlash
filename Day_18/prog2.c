/*

Program 2: Write a Program to convert entered Binary Number to Hexadecimal Number.


*/


#include <stdbool.h>

extern int printf (const char *, ...);
extern int scanf (const char *, ...);
extern double pow (double, double);

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

int binToHex (unsigned long long int bin) {
    bool a = checkIsBinary (bin);
    if (a == false) {
        return -1;
    }
     
    int dec = binToDec (bin);
    decToHex (dec);
    
    return 1;
}

void main (void) {

    unsigned long long int bin;
    
    printf ("\nEnter Binary number : ");
    scanf ("%llu", &bin);

    int x = binToHex (bin);
    
    x == -1 ? printf ("\nPlease enter valid Binary number.\n") : 1;

}
