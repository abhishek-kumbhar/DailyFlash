/*

Program 1: Write a Program to print series of Abundant numbers up to Nth
           element, where N is a number entered by user.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);


void main (void) {
    
    unsigned short int x, sum;
    
    printf ("\nEnter a number : ");
    scanf ("%hu", &x);

    printf ("\nAbundant numbers upto %hu are : \n", x);
    
    for (unsigned short int i = 1; i < x + 1; i++) {    
        sum = 0;
        for (unsigned short int j = 1; j < i / 2 + 1; j++) {
            i % j == 0 ? sum += j : 1;
        }
        sum > i ? printf ("%hu  ", i) : 1;
    }

}
