/*

Program 4: Write a Program to Print following Pattern.
                        =
                    =   1
                =   1   2
            =   1   2   3


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void printPattern (int x) {
    for (int i = 0; i < x; i++) {
        int k = 1;
        for (int j = 0; j < x; j++) {
            if (i + j > x - 2) {
                if (i + j == x - 1) {
                    printf ("= ");
                } else {
                    printf ("%d ", k++);
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

    printf ("\nEnter no of Rows : ");
    scanf ("%d", &x);

    printPattern (x);
    
}
