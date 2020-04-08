/*
 
Program 1: Write a Program that print Addition of Series up to nth length if
           user provides length.

Series:    1/1 + 1/2 + 1/3 + ..... + 1/n


*/


extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int n, x, y;
    float sum = 0;
    
    printf ("\nEnter length of Series : ");
    scanf ("%d", &n);

    for (int i = 1; i < n + 1; i++) {
        sum +=  (float) 1  / i;
    }

    printf ("\nThe addition of Series of length %d = %.2f", n, sum);

}
