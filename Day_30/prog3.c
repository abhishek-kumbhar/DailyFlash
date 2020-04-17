/*

Program 3: Write a Program to that accepts a number from user print
           multiplication of all Even Digits from that number.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);


int returnEvenSum (int x) {
    int sum = 1;
    while (x != 0) {
        (x % 10) % 2 == 0 ? sum *= (x % 10) : 1;
        x /= 10;
    }
    return sum;
}

void main (void) {
   
    int x;
    
    printf ("\nEnter a number : ");
    scanf ("%d", &x);
    
    printf ("\nThe multiplication of all Even Digits is %d", returnEvenSum(x));

}
