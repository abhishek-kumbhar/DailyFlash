/*

Program 1: Write a Program to print table in reverse order.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x;

    printf ("\nEnter a number : ");
    scanf ("%d", &x);

    for (int i = 10; i > 0; i--) {
        printf ("\n%2d * %2d = %2d", x, i, x * i);
    }

}

/* Alternatives :

    for (int i = 0; i < 10; i++) {
		printf ("%d * %d = %d\n", num, 10 - i, num * (10 - i));
	}


*/
