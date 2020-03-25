/*

Program 2 : Write a Program to print cube of first n numbers .


*/


extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {

    int x;

    printf ("\nEnter a Number :");
    scanf ("%d", &x);
    
    printf ("\nCube of First %d numbers are : \n", x);
    
    for (int i = 1; i < x + 1; i++) {
        printf("\nCube of %2d : %4d", i, i * i * i);
    }

}
