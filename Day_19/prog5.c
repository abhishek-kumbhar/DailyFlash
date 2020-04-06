/*

Program 5: Write a Program that computes sum of all possible divisors of an entered number.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int flag, x, sum = 0;
    
    printf("\nEnter a number : ");
    scanf("%d", &x);
    
        flag = 0;
        for (int j = 1; j < x / 2 + 1; j++) {
            if (x % j == 0) {
                sum += j;
            }  
        }   
        
        printf("\nThe sum of all possible divisors of %d is %d  ", x, sum);

}
