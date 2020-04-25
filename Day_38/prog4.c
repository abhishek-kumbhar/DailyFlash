/*

Program 4: Write a Program to Print following Pattern.

                @ @ @ @ @ 
                @ @ @ @ 
                @ @ @ 
                @ @ 
                @ 


*/


extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void printPattern (int x) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            i + j < x ? printf ("@ ") : 1;
        }
        printf ("\n");
    }

}


void main (void) {

    int x;

    printf ("\nEnter no of Rows : ");
    scanf ("%d", &x);

    printPattern (x);

}
