/*

Program 5: Write a Program that takes a number as input from user and prints
           only perfect digits if it have any else prints appropriate message.


*/


extern int printf (const char *, ...);
extern int scanf (const char *, ...);

int isPerfect (int x) {
    int sum = 0;
    for (int i = 1; i < x / 2 + 1; i++) {
        x % i == 0 ? sum += i : 1;
    }
    if (sum == x) {
        return 1;
    } else {
        return -1;
    }
    
}

void main (void) {
    
    int x, y, flag = 0;
    
    printf ("\nEnter a number : ");
    scanf ("%d", &x);
    
    y = x;
    
    while (x != 0) {
        isPerfect (x % 10) == 1 ? printf ("\nThe no %d have %d is a perfect digit.\n", y, (x % 10)) ? flag = 1 : 1: 1;
        x /= 10;
    }

    if (flag == 0) {
        printf ("\nThe no %d does NOT have any perfect digit.\n", y);
    }
    
}

