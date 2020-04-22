/*

Program 5: Write a Program that prints frequency of a digit from a number,
           where user provides number & digit both.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x, y, z, cnt = 0;
    
    printf ("\nEnter a number : ");
    scanf ("%d", &x);
    
    printf ("\nDigit to check frequency : ");
    scanf( "%d", &y);
    
    z = x;
    
    while (x != 0) { 
        y == x % 10 ? cnt++ : 1;
        x /= 10;    
    }

    printf ("\nThe Frequency of %d in number %d is %d.\n", y, z, cnt);
    
}
