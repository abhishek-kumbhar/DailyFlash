/*

Program 2: Write a Program that takes rupees as input from user and convert
           them into dollars.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int r;
    
    printf ("\nEnter rupees : ");
    scanf ("%d", &r);

    printf ("\n%d rupees into dollar = %.2f $", r, r / 71.45);

}

