/*

Program 3: Write a Program to that accepts an integer value from user and
           prints the Square of each digit.


*/

extern int printf (const char *,...);
extern int scanf (const char *, ...);

int returnSquare (int x) {
    return x * x;
}

void main (void) {
    
    unsigned int x;
    
    printf ("\nEnter a number : ");
    scanf ("%d", &x);
 
    while (x != 0) {
        int z = x % 10;
        printf("\nThe square of %d is %d", z, returnSquare(z));
        x /= 10;
    } 

}
