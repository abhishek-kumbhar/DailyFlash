/*

Program 1: Write a Program that prints the Harshad numbers ranging in m to n.


*/

# include <stdbool.h>

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

bool isHarshed (int x) {
    int sum = 0;
    int y = x;

    while (x != 0) {
        sum += x %10;
        x /= 10;
    }

    if (y % sum == 0) {
        return true;
    } else {
        return false;
    }
}


void main (void) {

    int x, y;
   
    printf ("\nEnter lower limit : ");
    scanf ("%d", &x);

    printf ("\nEnter upper limit : ");
    scanf ("%d", &y);

    printf ("\nHarshed Numbers from %d to %d are : ", x, y);

    for (int i = x; i < y + 1; i++) {
        if (isHarshed (i)) {
            printf ("%d ", i);
        }
    }

}
