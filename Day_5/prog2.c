/*

Program 2 : Write a Program to print SUM of First n Natural Numbers.


*/

extern int printf (const char *, ...);
extern int scanf(const char *, ...);

void main (void) {

    int sum = 0, x;

    printf ("\nEnter a number : ");
    scanf ("%d", &x);

    for (int i = 1; i < x + 1; i++) {
        sum += i;
    }
    
    printf("\nSum of first %d Natural numbers : %d\n", x, sum);

}

/*  Alternative : 

    sum = x * (x + 1) / 2;

*/
