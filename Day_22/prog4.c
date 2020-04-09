/*
 
Program 4: Write a Program to Print following Pattern.
                  D
                C D
              B C D
            A B C D
    

 */

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void printPattern (int x) {
    for (int i = 0; i < x; i++) {
        char a = 'A';
        int b = 0;
        for (int j = 0; j < x; j++) {
            i + j > x - 2 ? printf ("%c ", a + b) : printf ("  ");
            b++;
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
