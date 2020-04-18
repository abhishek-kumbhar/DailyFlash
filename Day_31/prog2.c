/*

Program 2: Write a Program that sums up all the digits from an entered
           number and finds average of that sum and print them both.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x, y, cnt = 0; 
    float sum = 0.0;
    
    printf ("\nEnter a number : ");
    scanf ("%d", &x);
    
    y = x;
    
    while (x != 0) {
        sum += x % 10;
        x /= 10;
        cnt++;
    }

    printf ("\nSum of digits from %d : %.0f", y, sum);
    printf ("\nAverage of sum of digits from %d : %.1f\n", y, sum / cnt);

}
