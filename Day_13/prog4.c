/*

Program 4: Write a Program to Print following Pattern.
            1
            8   27 
            64  125  216
            343 512  729  1000

*/
extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x = 1, y;

    printf ("\nEnter no of Rows : ");
    scanf ("%d", &y);
    
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf ("%4d  ", x * x * x);
            x++;
        }
        printf ("\n");
    }

}
