/*

Program 1: Write a Program to check whether the entered number is Strong
           Number or Not.
          {Note: A number can be termed as strong number; if the sum of factorials of
           each digit from that number is equal to that number, itself. e.g. 145 is a Strong
           Number since 1 + 24 + 120 = 145.}


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

unsigned int fact (unsigned int x) {
    if (x == 0) 
        return 1;
    return x * fact (x - 1);
}

int isStrongNumber (int x) {
    int sum = 0;
    while (x != 0) {
        sum += fact (x % 10);
        x /= 10;
    }
    return sum;
}

void main (void) {
    
    int x;
    
    printf ("\nEnter a number : ");
    scanf ("%d", &x);
    
    isStrongNumber (x) == x ? printf ("\n%d is Strong number ", x) : printf ("\n%d is NOT a Strong number", x);

}
