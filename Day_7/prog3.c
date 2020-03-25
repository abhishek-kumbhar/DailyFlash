/*

Program 3: Write a Program to print table of n.


*/

extern int printf(const char *, ...);
extern int scanf(const char *, ...);

void main (void) {
    
    int x;

    printf ("\nEnter a Number : ");
    scanf ("%d", &x);
    
    printf ("\nTable of %d : \n", x);

    for (int i = 1; i < 11; i++) {
        printf("\n%d * %2d = %2d", x, i, x * i);
    }
}
