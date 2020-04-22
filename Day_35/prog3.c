/*

Program 3: Write a Program to check whether the entered number is
           Palindrome number or not.


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
    scanf ("%d", &x);
    
    y = x;

    reverse (&x);
    
    x == y ? printf("\nPalindrome number.\n") : printf("\nNOT palindrome number.\n");

}
