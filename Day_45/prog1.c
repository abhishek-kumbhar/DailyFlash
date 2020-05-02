/*

Program 1: Write a Program that swaps first digit with last digit of a number
           entered by user.


*/

# include <stdio.h>
# include <math.h>

int getLength (int x) {
    int cnt = 0;
    while (x != 0) {
        x /= 10;
        cnt++;
    }
    return cnt;
}

int reverse (int x) {
    int rev = 0;
    while (x != 0) {
        rev = rev * 10 + x % 10;
        x /= 10;
    }
    return rev;
}

int swapEnds (int x) {
    int len = getLength (x);
    int last = x % 10;

    int rev = reverse (x);
    int first = rev % 10;
    
    int i = 0, swapped = 0, ind = 0;
    
    while (x != 0) {
        
        if (i == 0) {
            swapped += first * pow (10, ind++);
            x /= 10;
            i++;
        }

        if (i == len - 1) {
            swapped += last * pow (10, ind);
            x /= 10;
        }

        swapped += x % 10 * pow (10, ind++);
        x /= 10;
        i++;
    }

    return swapped;
    
}


void main (void) {

    int x;

    printf ("\nEnter a number : ");
    scanf ("%d", &x);

    int swapped = swapEnds (x);

    printf ("\nBefore swapping x = %d", x);
    printf ("\nAfter  swapping x = %d\n", swapped);

}
