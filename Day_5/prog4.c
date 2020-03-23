/*

Program 4 : Write a Program to print First n Even Numbers .


*/


extern int printf(const char *, ...);
extern int scanf(const char *, ...);

void main (void) {
    
    int x;

    printf ("\nEnter a number : ");
    scanf ("%d", &x);
    
    printf ("First %d Even numbers are : ", x);

    for (int i = 0; i < x * 2 ; i++) {
        (i % 2 == 0) ? printf("%2d  ", i) : 1;
    }
    
}
