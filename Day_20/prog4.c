/*

Program 4: Write a Program to Print following Pattern.
                a  b  c  d
                c  d  e
                e  f
                g


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {

    int x;
    char a = 'a';

    printf ("\nEnter no of Rows : ");
    scanf ("%d", &x);

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x - i; j++) {
            printf ("%c ", a + j);
        }
        a += 2;
        printf ("\n");
    }

}
