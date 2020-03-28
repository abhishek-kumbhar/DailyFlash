/*

Program 1: Write a Program to Print following Pattern

            1
            2  2 
            3  3  3
            4  4  4  4


*/




extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x;
    
    printf ("\nEnter number of Rows : ");
    scanf ("%d", &x);

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf("%d  ", i + 1);
        }
        printf("\n");
    }

}

