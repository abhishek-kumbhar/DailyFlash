/*

Program 5: Write a Program that takes a number as input from user and prints
           the counts the occurrence of Odd Digits & Even Digits from it.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x, y, cnt1 = 0, cnt2 = 0;
    
    printf ("\nEnter a number : ");
    scanf ("%d", &x);
    
    y = x;
    
    while (x != 0) {
        (x % 10) % 2 == 0 ? cnt1++ : cnt2++;
        x /= 10;
    }

    printf ("\nThe number %d contains  %d Odd & %d Even digits ", y, cnt1, cnt2);

}
