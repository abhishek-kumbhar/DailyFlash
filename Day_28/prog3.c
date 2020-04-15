/*

Program 3: Write a Program to that accepts an integer value from user and
           prints the Average of all.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x, y, sum = 0, cnt = 0;
    
    printf ("\nEnter a number : ");
    scanf ("%d", &x);
    
    y = x;
    
    while (x != 0) {
        sum += x % 10;
        cnt++;
        x /= 10;
    }

    printf ("\nThe average of digits from number %d is %.1f", y, (float)sum / cnt);

}
