/*

Program 4: Write a Program to Print following Pattern.
                    A     
                 A  B
              A  B  C
           A  B  C  D        


*/


extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void printPattern (int x) {
    for (int i = 0; i < x; i++) {
        int b = 0;
        for (int j = 0; j < x; j++) {
            i + j > x - 2 ? printf ("%c ", 65  + (b++)) : printf ("  ");
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
