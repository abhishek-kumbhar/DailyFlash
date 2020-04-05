/*

Program 1: Write a Program that checks whether the entered number is a
           Prime Number or not.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x, flag = 0;
    
    printf("\nEnter a number : ");
    scanf("%d", &x);
    
    if (x == 0 || x == 1) {
        printf ("\n%d is NOT a prime number.\n", x);
        return;
    }

    for (int i = 2; i < x / 2 + 1; i++) {
        if (x % i == 0) {
            flag = 1;
            printf ("\n%d is NOT a Prime number.\n", x);
            break;
        }
    }

    flag == 0 ? printf ("\n%d is a Prime number.\n", x) : 1;

}

