/*

Program 4: Write a Program to Print following Pattern.
             1
             4  9 
             16 25 36
             49 64 81 100

*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);


void main (void) {
    
    int n, x = 1;

    printf ("\nEnter no of Rows : ");
    scanf ("%d", &n);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf ("%3d  ", x * x);
            x++;
        }
        printf ("\n");
    }

}
