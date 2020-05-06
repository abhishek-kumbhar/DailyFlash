/*

Program 1: Write a Program that prints all the prime factors of a number entered by user.


*/

# include <stdio.h>
# include <stdbool.h>

bool isPrime (int x) {
    for (int i = 2; i < x / 2 + 1; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;

}

void primeFactors (int x) {
    if (x < 2) {
        printf ("\nPrime numbers start from 2 & not %d\n", x);
        return;
    }

    printf ("\nPrime factors of %d are : ", x);
    for (int i = 2; i < x / 2 + 1; i++) {
        if (x % i == 0) {
            if (isPrime (i)) {
                printf ("%d ", i);
            }
        }
    }

}


void main (void) {

    int x;

    printf ("\nEnter a number : ");
    scanf ("%d", &x);

    primeFactors (x);

}
