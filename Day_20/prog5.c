/*

Program 5: Write a Program to Print following Pattern.
                         4
                      3  4
                   2  3  4
                1  2  3  4


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {

    int x;

    printf ("\nEnter no of Rows : ");
    scanf ("%d", &x);

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            i + j > x - 2 ? printf ("%d  ", j + 1) : printf ("   ");
        }
        printf ("\n");
    }

}
