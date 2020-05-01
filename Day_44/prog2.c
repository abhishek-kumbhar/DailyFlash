/*

Program 2: Write a Program that prints the Duck Numbers between 1 to n.


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

    printf ("\nDuck numbers from 1 to %d are : \n", x);

    for (int i = 1; i < x + 1; i++) {
        if (isDuck (i)) {
            printf ("%d ", i);
        }
    }

}
