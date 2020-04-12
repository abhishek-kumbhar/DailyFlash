/*

Program 1: Write a Program to check whether the entered number by user is
           Deficient or not.
           
           {Note: A Number is termed as deficient number, if sum of all of its perfect
            divisors is less than the number itself. E.g. 15 is deficient number, since 1 + 3 +
            5 = 9 < 15.}


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    unsigned short int x, sum = 0;
    
    printf ("\nEnter a number : ");
    scanf ("%hu", &x);

    for (unsigned short int i = 1; i < x / 2 + 1; i++) {
        x % i == 0 ? sum += i : 1;
    }
    
    sum < x ?  printf ("\n%hu is a dificient number\n", x) :  printf ("\n%hu is NOT dificient number\n", x);

}
