/*

    Program 1: Write a Program to check whether the entered number is
               Abundant number or not.
              {Note: a number can be termed as abundant if the sum of all of its perfect
               divisors is greater than that number itself, e.g. 12: 1+2+3+4+6 = 16 > 12 so 12 
               is an abundant number.}


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    unsigned short int x, sum = 0;
    
    printf("\nEnter a number : ");
    scanf("%hu", &x);

    for (unsigned short int i = 1; i < x / 2 + 1; i++) {
        x % i == 0 ? sum += i : 1;
    }

    sum > x ? printf("\n%hu is Abundant Number", x) : printf("\n%hu is Not an Abundant Number", x);

}
