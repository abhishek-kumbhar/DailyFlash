/*

Program 1: Write a Program that checks whether an entered number is
           Harshad Number or Not.

           {Note: A number is termed as Harshad number if sum of all digits from that
            number is Perfect Divisor of that number. E.g., 171, 1+7+1 = 9, and 9 is perfect
            divisor of 171 so 171 is Harshad number.}


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x, y, sum = 0;
    
    printf ("\nEnter a number : ");
    scanf ("%d", &x);
    
    y = x;
    
    while (x != 0) {
        sum += x % 10;
        x /= 10;    
    }

    y % sum == 0 ? printf ("\n%d is Harshed number.\n", y) : printf ("\n%d is NOT harshed number.\n", y);

}
