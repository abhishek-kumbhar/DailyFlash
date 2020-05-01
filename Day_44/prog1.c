/*

Program 1: Write a Program that prints the series of automorphic numbers ranging between 1 to n.


*/

# include <stdio.h>
# include <stdbool.h>
# include <math.h>

int getLength (int x) {
    int cnt = 0;
    while (x != 0) {
        x /= 10;
        cnt++;
    }
    return cnt;
}


bool isAutomorphic (int x) {
    int len = getLength (x);
    int y = x;
    if (((x * x) % (int) pow (10, len)) == x) {
        return true;
    }
    return false;
}


void main (void) {
    
    int x;

    printf ("\nEnter a number : ");
    scanf ("%d", &x);
    
    printf ("\nAutomorphic Numbers between 0 to %d are : \n", x);

    for (int i = 0; i < x + 1; i++) {
        if (isAutomorphic (i)) {
            printf ("%d  ", i);
        }   
    }
    
}
