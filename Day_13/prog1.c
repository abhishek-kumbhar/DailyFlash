/*

Program 1: Write a Program which detects whether the entered number is
           perfect or not .
            {Note: If sum of perfect divisors of number is equal to the entered number
            than it is considered as perfect one.}


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x, sum = 0;
    
    printf ("\nEnter a Number : ");
    scanf ("%d", &x);

    for (int i = 1; i < x / 2 + 1; i++) {
        x % i == 0 ? sum += i : 1;
    }

    sum == x ? printf ("\nEntered no is Perfect.") : printf ("\nEntered no is NOT perfect.");

}
