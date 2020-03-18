/*
Program 4: Write a Program to Print following Pattern
            * * * *
            * * * *
            * * * *
            * * * * 
*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    int x;
    
    printf ("\nEnter no of Rows : ");
    scanf ("%d", &x);

    for (int i = 1; i < x * x + 1; i++) {
        if (i % x == 0) {
            printf ("*\n");
        } else {
            printf ("* ");
        }
    }
}

/* Alternatives : 
    
   for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            printf ("* ");
        }
        printf ("\n");
   }
   

*/
