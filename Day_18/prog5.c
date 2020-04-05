/*

Program 5: Write a Program to print sum of series up to the nth entered number.

Series is: 9, 99, 999, 9999, 9999 . . .. n.

*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);
double pow (double, double);

void main (void) {
    
    int x, sum = 0, total = 0;

    printf ("\nEnter a number : ");
    scanf ("%d", &x);

    for (int i = 0; i < x; i++) {
        sum += 9 * pow (10, i);
        total += sum;
    }

    printf ("\nThe sum of %d th element is series = %d", x, total);

}
