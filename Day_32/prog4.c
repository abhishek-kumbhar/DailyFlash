/*

Program 4: Write a Program to Print following Pattern.

            E a D b 
              c C d 
                B e 
                  f 


*/


extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void printPattern (int x) {
    int a = 'a';
    int b = 'E';
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            if (x - i + j > x - 1) {
                if (j % 2 == 0) {
                    printf ("%c ", b--);
                } else {
                    printf ("%c ", a++);
                }
            } else {
                printf ("  ");
            }
        }
        printf ("\n");
    }

}


void main (void) {

    int x;

    printPattern (4);

}
