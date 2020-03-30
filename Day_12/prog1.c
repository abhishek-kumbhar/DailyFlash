/*

Program 1: Write a Program to print series of Even numbers ranging between
           two numbers entered by user.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x, y;
    
    printf ("\nEnter Min of series : ");
    scanf ("%d", &x);
    
    printf ("\nEnter Max of series : ");
    scanf ("%d", &y);
    
    printf ("\nSeries of Even Numbers Ranging between %d & %d : ", x, y);
    
    for (int i = x; i < y + 1; i++) {
        (i % 2 == 0) ? printf ("\n%d", i) : 1;
    }
}
