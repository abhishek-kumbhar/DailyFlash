/*

Program 4: Write a Program to Print following Pattern.

                00   01   02   03   04   
                     11   12   13   14   
                          22   23   24   
                               33   34   
                                    44   


*/
extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void printPattern (int x) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            x - i + j > x - 1 ? printf ("%d%d   ", i, j) : printf ("     ");
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
