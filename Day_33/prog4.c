/*

Program 4: Write a Program to Print following Pattern.

                        0      1     10     11    100 
                              10     11    100    101 
                                    100    101    110 
                                           110    111 
                                                 1000


*/


extern int printf (const char *, ...);
extern int scanf (const char *, ...);
double pow (double, double);

long int getBinary (int x) {
    long int bin = 0;
    int i = 0;
    while (x != 0) {
        bin += (x % 2) * pow (10, i++);
        x /= 2;
    }
    return bin;
}


void printPattern (int x) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
           x - i + j > x - 1 ? printf ("%6ld ", getBinary (i + j)) : printf ("       ");
        }
        printf ("\n");
    }

}


void main (void) {

    int x;

    printf ("\nEnter no of Rows : ");
    scanf ("%d", &x);

    printPattern (x);

}
