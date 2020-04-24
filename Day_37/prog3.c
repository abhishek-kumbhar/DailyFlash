/*

Program 3: Write a Program that accepts a number from user and prints max digit from that number.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

int getMaxDigit (long int x) {
    int max = 0;
    while (x != 0) {
        if (x % 10 > max) {
            max = x % 10;
        }
        x /= 10;
    }
    return max;
}


void main (void) {

    long int x;

    printf ("\nEnter a number : ");
    scanf ("%ld", &x);

    printf ("\nMax number from %ld is %d\n", x, getMaxDigit (x));

}
