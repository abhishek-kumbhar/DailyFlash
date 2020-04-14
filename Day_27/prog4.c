/*

Program 4: Write a Program to Print following Pattern.

                       A3
                   B3  A4
               C3  B4  A5
           D3  C4  B5  A6 

*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void printPattern (int x) {
    for (int i = 0; i < x; i++) {
        char a = 'A' + x - 1;
        for (int j = 0; j < x; j++) {
            i + j > x - 2 ? printf ("%c%d ", a, i + j) : printf ("   ");
            a--;
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
