/*

Program 4: Write a Program to Print following Pattern.

            0A   1B   2C   3D   4E   
            1A   2B   3C   4D   
            2A   3B   4C   
            3A   4B   
            4A   


*/


extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void printPattern (int x) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            if (i + j < x) {
                printf ("%d%c   ", i + j, 65 + j);
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
