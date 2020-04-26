/*

Program 1: Write a Program that prints the Series of reversed numbers ranging in m to n.


*/


extern int printf (const char *, ...);
extern int scanf (const char * , ...);

void reverse (int * x) {
    int rev = 0;
    while (*x != 0) {
        rev = rev * 10 + *x % 10;
        *x /= 10;
    }
    *x = rev;
}



void main (void) {  
    
    int x, y;

    printf ("\nWe can't handle case of heading zero's\n");

    printf ("\nEnter lower limit : ");
    scanf ("%d", &x);

    printf ("\nEnter upper limit : ");
    scanf ("%d", &y);

    for (int i = x; i < y + 1; i++) {
        int j = i;
        reverse (&j);
        printf ("Reverse of %d = %d\n", i, j);
    }

}
