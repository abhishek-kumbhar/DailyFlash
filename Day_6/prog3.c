/*

Program 3 : Write a Program that accepts a n inte ger from user and prints
            whether that number is odd or even .


*/


extern int printf(const char *, ...);
extern int scanf(const char *, ...);

void main (void) {
    
    int x;
    
    printf("\nEnter a number : ");
    scanf("%d", &x);

    (x % 2 == 0) ? printf("\n%d is an Even Number.\n", x) : printf("\n%d is Odd Number.\n", x);

}
