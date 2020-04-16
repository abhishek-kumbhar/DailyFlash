/*

Program 1: Write a Program to takes a number from user and prints those
           digits who are prime in nature.



*/

extern int printf (const char *,...);
extern int scanf (const char *, ...);

int isPrime (int x) {
    int flag = 0;
    if (x == 0 || x == 1) {
        return -1;
    }    
        flag= 0;
        for (int i = 2; i < x; i++) {
            x % i == 0 ? flag = 1 : 1;
        }
        if (flag == 0) {
            return x;
        } else {
            return -1;
        }
} 



void main (void) {
    
    unsigned int x, y;
    
    printf ("\nEnter a number : ");
    scanf ("%d", &x);
    
    y = x;
    
    printf("\nPrime digits in %d are : ", y);
    
    while (x != 0) {
        int i = isPrime (x % 10);
        i != -1 ? printf ("%d ", i) : 1;
        x /= 10;
    }
    

}
