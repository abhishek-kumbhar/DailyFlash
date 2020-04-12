/*

Program 5: Write a Program that takes a number as input from user and prints
           the counts the occurrence of even digits from it


*/


extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    unsigned short int cnt = 0;
    int x, y;
    
    printf ("\nEnter a number : ");
    scanf ("%d", &x);
    
    y = x;

    while (x != 0) {
       x % 10 % 2 == 0 ? cnt++ : 1;
       x /= 10;
    }
    
    printf ("\nThe number %d has %hu Even Digits", y, cnt);

}
