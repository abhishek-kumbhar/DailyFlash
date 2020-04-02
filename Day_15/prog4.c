/*  

Program 4: Write a Program to Print following Pattern.
            7
            7  6 
            6  5  4
            4  3  2  1


*/

extern int printf (const char *, ...);


void main (void) {

    int x = 7;
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0 ; j < i + 1; j++) {
            printf ("%d  ", x--);
        }
        ++x;
        printf ("\n");
    }

}
