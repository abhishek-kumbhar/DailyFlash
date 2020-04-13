/*

Program 1: Write a Program to print series of Deficient Numbers up to nth
           element. Where n is number entered by user.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    unsigned short int x;
    
    printf ("\nEnter number : ");    
    scanf ("%hu", &x);

    printf ("\nSeries of Difficiant numbers upto %hu is : \n", x);

    for (unsigned short int i = 1; i < x + 1; i++) {
        unsigned short int sum = 0;
        for (unsigned short int j = 1; j < i / 2 + 1; j++) {
            i % j == 0 ? sum += j : 1;
        }
        sum < i ? printf ("%hu  ", i) : 1;
    }

}
