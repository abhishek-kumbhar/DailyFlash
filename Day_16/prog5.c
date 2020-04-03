/*

Program 5: Write a Program that prints series of perfect numbers up to the
           entered limiting number.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x;
    
    printf("\nEnter limit for a series : ");
    scanf("%d", &x);

    for (int i = 1; i < x + 1; i++) {
        int sum = 0;
        for (int j = 1; j < i / 2 + 1; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            printf ("%d  ", i);
        }
    }

}
