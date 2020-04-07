/*

Program 1: Write a Program to print Fibonacci Series of 5 Elements.
           {Note: In Fibonacci series next element is sum of previous two elements}


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void printFib (int x) {
    int a = 0;
    int b = 1;
    printf ("%d ", a);
    printf ("%d ", b);

    for (int i = 2; i < x; i++) {
        int c = a + b;
        printf ("%d ", c);
        a = b;
        b = c;
    }

}


void main (void) {
    
    int x;

    printf ("\nEnter a number : ");
    scanf ("%d", &x);

    printf ("\nFibonacci series upto %d term is : \n", x);

    printFib (x);

}
