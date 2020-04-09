/*
 
   Program 5: Write a Program that prints following pattern.
                
                =  2  3  4
                1  =  3  4
                1  2  =  4
                1  2  3  =


 */


extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void printPattern (int x) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            x - i + j == x ? printf ("= ") : printf ("%d ", j + 1);
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
