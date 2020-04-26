/*

Program 4: Write a Program to Print following Pattern.
            
            A B D G K 
            K L N Q 
            Q R T 
            T U 
            U 



*/
extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void printPattern (int x) {
    int num = 1;
    for (int i = 0; i < x; i++) {
        int k = 1;
        for (int j = 0; j < x; j++) {
            if (i + j < x) {
                printf ("%2c ", 64 + num);
                num += k++;    
            }
        }
        num -= --k;
        printf ("\n");
    }

}


void main (void) {

    int x;

    printf ("\nEnter no of Rows : "); // (give Input upto 5 rows.)
    scanf ("%d", &x);

    printPattern (x);

}
