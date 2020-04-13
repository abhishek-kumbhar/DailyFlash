/*

Program 4: Write a Program to Print following Pattern.
                        9
                    9  16
                9  16  25
            9  16  25  36



*/
extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void printPattern (int x) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            i + j > x - 2 ? printf ("%2d ", (i + j) * (i + j)) : printf ("   ");
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
