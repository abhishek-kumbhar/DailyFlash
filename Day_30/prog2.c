/*
 
Program 2: Write a Program to display a number in reverse order. 


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x, i = 0, sum = 0;

    printf ("\nEnter a number : ");
    scanf ("%d", &x);
    
    while (x != 0) {
        sum = sum * 10 + x % 10;
        x /= 10;
    }

    printf ("\nReversed number : %d\n", sum);

}
