/*

Program 4: Write a Program to Print following Pattern
            1 1 1 1
            1 1 1 1
            1 1 1 1
            1 1 1 1

*/

extern int printf(const char *, ...);

void main (void) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("1  ");
        }
        printf("\n");
    }
}

/* Alternatives :
 
1 -> for (int i = 1; i <= 16; i++) {
        (i % 4 == 0) ? printf(" 1\n") : printf(" 1");
     }


*/
