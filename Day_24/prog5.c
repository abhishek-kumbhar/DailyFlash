/*

Program 5: Write a Program that takes a number as input from user and prints
           the digit count from that number.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x, cnt = 0, y;
    
    printf("\nEnter a number : ");
    scanf("%d", &x);
    
    y = x;
    
    while (x != 0) {
        x /= 10;
        cnt++;
    }
    
    printf("The number %d has %d digits", y, cnt);

}

