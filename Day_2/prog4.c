/*

Program 4: Write a Program to Print following Pattern
            1 2 3 4
            1 2 3 4
            1 2 3 4
            1 2 3 4

*/


extern int printf(const char *, ...);
extern int scanf(const char *, ...);


void main (void) {
    int x;
    printf ("\nEnter no of Rows : ");
    scanf ("%d", &x);

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            printf("%d ", j + 1);
        }
        printf("\n");
    }

}

/*

Alternatives
    
    int y = 1;
    for (int i = 1; i <= x * x ; i++) {
        if (i % x == 0) {
            printf("%d\n", y); 
            y = 1;
        } else {
            printf("%d ", y++);
        }
    }

*/
