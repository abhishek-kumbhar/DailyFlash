/*

Program 5: Write a Program to print following Pattern.
            0 0 0 0 
            1 1 1 1
            0 0 0 0
            1 1 1 1


*/

extern int printf(const char *, ...);

void main (void) {
    
    int j;
    
    for (int i = 1; i <= 16; i++) { 
        (i >= 1 && i <= 4 || i >= 9 && i <= 12) ? (j = 0) : (j = 1);
        (i % 4 == 0) ? printf(" %d\n", j) : printf(" %d", j);
    }
}
