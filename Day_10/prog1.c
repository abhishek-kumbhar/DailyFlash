/*

Program 1: Write a Program to print all the numbers upto n
           that are divisible by 3 or 5.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x;

    printf ("\nEnter a number : ");
    scanf ("%d", &x);

    printf ("\nAll Numbers divisible by 3 or 5 upto %d : \n", x);

    for (int i = 1; i < x + 1; i++) {
        ((i % 3 == 0) || (i % 5 == 0)) ? printf("%d  ", i) : 1;
    }

}
