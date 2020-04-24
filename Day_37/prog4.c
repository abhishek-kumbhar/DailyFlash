/*

Program 4: Write a Program to Print following Pattern.

             1  2  3  4  5 
             5  1  2  3  4 
             4  5  1  2  3 
             3  4  5  1  2 
             2  3  4  5  1 


*/


extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void printPattern (int x) {
    int n = 0;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            printf ("%2d ", (n++) % x + 1);
        }
        n += x - 1;
        printf ("\n");
    }

}


void main (void) {

    int x;

    printf ("\nEnter no of Rows : ");
    scanf ("%d", &x);

    printPattern (x);

}
