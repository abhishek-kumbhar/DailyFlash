/*

Program 2: Write a Program that accepts an integer from user and prints its
           second successor and second predecessor.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x;
    
    printf ("\nEnter a number : ");
    scanf ("%d", &x);

    printf ("\nSecond Predecessor : %d", x - 2);
    printf ("\nSecond Succecessor : %d", x + 2);

}
