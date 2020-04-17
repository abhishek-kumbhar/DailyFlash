/*

Program 4: Write a Program to Print following Pattern.
            
             0 -1 -4 -9 -16 
                0 -3 -8 -15 
                   0 -5 -12 
                       0 -7 
                          0 


*/


extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void printPattern (int x) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            x - i + j > x - 1 ? printf ("%2d ", (i + j) * (i - j)) : printf ("   ");
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
