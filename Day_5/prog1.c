/*

Program 1: Write a program to print First n Natural Numbers.


*/

extern int printf(const char *, ...);
extern int scanf(const char *, ...);

void main (void) {
    
    int x;
    
    printf ("\nEnter a number : ");
    scanf ("%d", &x);

    printf ("First %d Natural numbers are : ", x);

    for (int i = 1; i < x + 1 ; i++) {
        printf("%d ", i);
    }

}
