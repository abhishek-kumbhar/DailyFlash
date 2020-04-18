/*

Program 4: Write a Program to Print following Pattern.
            
            0  1  4  9 16 
               2  6 12 20 
                  8 15 24 
                    18 28 
                       32 


*/


extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void printPattern (int x) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            x - i + j > x - 1 ? printf ("%2d ", j * (i + j)) : printf ("   ");
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
