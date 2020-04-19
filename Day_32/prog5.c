/*

Program 5: Write a Program that takes a number as input from user and prints
           Quotient of division of each digit from that number with the number itself.


*/
extern int printf (const char *, ...);
extern int scanf (const char *, ...);


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
    
    printf ("\nEnter a number : ");
    scanf("%d", &x);

    y = x;
    
    reverse (&x);

    while (x != 0) {
        printf ("\n%d / %d = %d", y, (x % 10), y / (x % 10));
        x /= 10;    
    }

}   
