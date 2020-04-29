/*

Program 1: Write a Program that Checks whether a number entered by user is
           Duck Number or Not.

          {Note: A duck number is such a number, which at least contains a Zero as digit
           in it, but not only at the beginning of that number. e.g. 12804, since it contains
           a zero it is a duck number, where 0863 is not a duck number because it
           contains zero at the beginning.}

*/

# include <stdio.h>
# include <stdbool.h>

bool isDuck (int x) {
    while (x != 0) {
        if (x % 10 == 0) {
            return true;
        }
        x /= 10;
    }
    return false;
}

void main (void) {

    int x;

    printf ("\nEnter a number : ");
    scanf ("%d", &x);

    if (isDuck (x)) {
        printf ("%d is a Duck Number.\n", x);
        return;
    }
    
    printf ("%d is NOT Duck Number.\n", x);

}
