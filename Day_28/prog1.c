/*

Program 1: Write a Program to print Series of Strong Numbers up to Nth
           Elements. Where n is the number entered by User.


*/


extern int printf (const char *, ...);
extern int scanf (const char *, ...);

int fact (int x) {
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
    
    printf("\nEnter a number : ");
    scanf("%d", &x);

    for (int i = 0; i < x + 1; i++) {
        isStrongNumber(i) == i ? printf("%d  ", i) : 1;
    }

}
