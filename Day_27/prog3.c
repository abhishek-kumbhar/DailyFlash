/*

Program 3: Write a Program to that accepts an integer value from user and
           prints the sum of all digits from that number.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x, y, sum = 0;
    
    printf ("\nEnter a number : ");
    scanf ("%d", &x);
    
    y = x;
    
    while (x != 0) {
        sum += x % 10;
        x /= 10;
    }

    printf ("\nThe sum of digits from a number %d = %d ", y, sum);

}
