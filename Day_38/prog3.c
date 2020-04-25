/*

Program 3: Write a Program that accepts a number from user and prints min digit from that number.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

int getMinDigit (long int x) {
    int min = 0;
    while (x != 0) {
        if (x % 10 < min) {
            min = x % 10;
        }
        x /= 10;
    }
    return min;
}


void main (void) {

    long int x;

    printf ("\nEnter a number : ");
    scanf ("%ld", &x);

    printf ("\nMin number from %ld is %d\n", x, getMinDigit (x));

}
