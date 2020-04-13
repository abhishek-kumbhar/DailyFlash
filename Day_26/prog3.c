/*

Program 3: Write a Program to that accepts an integer value from user and
           prints all odd numbers from that number to one using while loop.

*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    unsigned short int x;
    
    printf ("\nEnter a number : ");
    scanf ("%hu", &x);

    printf ("\nOdd numbers from %hu to 1 are : \n", x);

    while (x != 0) {
        x % 2 == 1 ? printf ("%hu ", x) : 1;
        x--;
    }

}
