/*

Program 1: Write a program that accepts an integer from user and print it.


*/

extern int printf(const char *, ...);
extern int scanf(const char *, ...);

void main (void) {
    
    int x;
    
    printf("\nEnter any Integer : ");
    scanf("%d", &x);

    printf("\nYou entered Integer is : %d\n", x);
}
