/*

Program 5: Write a Program that takes a number as input from user and prints
           the factorials of each digit.


*/


extern int printf (const char *,...);
extern int scanf (const char *, ...);

int returnFact (int x) {
    return x == 0 ? 1 : x * returnFact (x - 1);
}


void main (void) {

    unsigned int x;

    printf ("\nEnter a number : ");
    scanf ("%d", &x);

    while (x != 0) {
        int z = x % 10;
        printf ("\nThe factorial of %d is %d", z, returnFact(z));
        x /= 10;
    } 

}
