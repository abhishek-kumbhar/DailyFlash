/*

Program 4: Write a Program to Print following Pattern.
            +  =  +  =
            +  =  +
            +  =
            +


*/


extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x;

    printf ("\nEnter no of Rows : ");
    scanf ("%d", &x);

    for (int i = 0; i < x + 1; i++) {
        for (int j = 0; j < x - i; j++) {
            j % 2 == 0 ? printf("+  ") : printf("=  "); 
        }
        printf("\n");
    }
    
}


