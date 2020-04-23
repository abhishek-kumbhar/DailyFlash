/*

Program 4: Write a Program to Print following Pattern.

                 0   0   0   0   0   0  
                     1   2   3   4   5  
                         4   6   8  10  
                             9  12  15  
                                16  20  
                                    25  


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void printPattern (int x) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            x - i + j > x - 1 ? printf ("%2d  ", i * j) : printf ("    ");
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
