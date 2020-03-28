/*

Program 2: Write a Program to Print following Pattern
            1
            2  3
            4  5  6
            7  8  9  10


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {

    int x = 1, y;
    
    printf ("\nEnter no of Rows : ");
    scanf ("%d", &y);

    for (int i = 0; i < y; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf("%2d  ", x++);
        }
        printf("\n");
    }

}

