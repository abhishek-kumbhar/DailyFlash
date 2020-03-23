/*

Program 3 : Write a Program to print First n Odd Numbers .


*/


extern int printf(const char *, ...);
extern int scanf(const char *, ...);

void main (void) {
    
    int x;

    printf ("\nEnter a number : ");
    scanf ("%d", &x);
    
    printf ("First %d Odd numbers are : ", x);

    for (int i = 1; i < x * 2 + 1; i++) {
        (i % 2 == 1) ? printf("%2d  ", i) : 1;
    }

}
