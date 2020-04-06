/*

Program 4: Write a Program to Print following Pattern.
             7  14  21  28
            35  42  49 
            56  63
            70


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x, sum = 0;

    printf ("\nEnter a number : ");
    scanf ("%d", &x);

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            sum += x;
            printf ("%2d  ", sum);
        }
        printf ("\n");
    }
}
