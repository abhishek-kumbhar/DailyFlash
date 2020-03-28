/*

Program 5: Write a Program that accepts an integer from user and prints all of
           its perfect divisors.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x;
    
    printf("\nEnter a number : ");
    scanf("%d", &x);
    
    printf("\nPerfect Divisors of %d are : ", x);
    
    for (int i = 2; i < (x / 2 + 1); i++) {
        (x % i == 0) ? printf("%d ", i) : 1;
    }

}


