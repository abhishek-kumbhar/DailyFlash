/*

Program 5: Write a Program that takes a number as input from user and prints
           only those digits from that number, which are perfect divisors of the actual number.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x, y;
    
    printf ("\nEnter a number : ");
    scanf ("%d", &x);
    
    y = x;
    
    printf ("\nThe Perfect divisiors digits from the number %d are : ", y);
    
    while (x != 0) {
        y % (x % 10) == 0 ? printf ("%d ", (x % 10)) : 1;
        x /= 10;
    }   

}
