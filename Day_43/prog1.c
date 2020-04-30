/*

Program 1: Write a Program that Checks whether a number entered by user is
           an Automorphic Number or Not.

           {An Automorphic Number is such a number, whose Square ends with that
            number itself. e.g. 5 is Automorphic number. Square of 5 is 25 which satisfies
            the condition}


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
    
    if (isAutomorphic (x)) {
        printf ("%d is Automorphic number.\n", x);
    } else {
        printf ("%d is NOT Automorphic number.\n", x);
    }   
    
}
