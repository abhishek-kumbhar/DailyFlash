/*

Program 1: Write a Program to that prints series of odd numbers in reverse
           order from the limiting number entered by user.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x;
    
    printf ("\nEnter limiting number : ");
    scanf ("%d", &x);

    for (int i = x; i > 0; i--) {
        i % 2 == 1 ? printf ("%d ", i) : 1;
    }

}
