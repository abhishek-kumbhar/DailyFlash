/*

Program 1: Write a Program to print all the numbers upto n
           that are divisible by 4 and 7.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x;

    printf ("\nEnter a number : ");
    scanf ("%d", &x);

    printf ("\nAll Numbers divisible by 4 and 7 upto %d : \n", x);

    for (int i = 1; i < x + 1; i++) {
        ((i % 4 == 0) && (i % 7 == 0)) ? printf("%d  ", i) : 1;
    }

}
