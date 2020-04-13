/*

Program 5: Write a Program that takes a number as input from user and prints
           the counts the occurrence of odd digits from it


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x, y;
    unsigned short int cnt = 0;
    
    printf ("\nEnter a number : ");
    scanf ("%d", &x);
    
    y = x;

    while (x != 0) {
        x % 10 % 2 == 1 ? cnt++ : 1;
        x /= 10;
    }
    
    printf ("\nThe number %d has %hu Odd digits.", y, cnt);

}
