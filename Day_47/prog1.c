/*

Program 1: Write a Program that prints whether two numbers entered by user
           are amicable numbers pair or not.

           {Note: A Pair of two numbers can be Amicable if Sum of all perfect divisors of
                  First number is equal to second number and vice versa.
                  e.g: 220 & 284 are amicable pair since, sum of all perfect divisors of 220 is 284
                  and for 284 its 220}


*/

# include <stdio.h>
# include <stdbool.h>

int getFactorsSum (int x) {
    int sum = 0;
    for (int i = 1; i < x / 2 + 1; i++) {
        sum += x % i == 0 ? i : 0;
    }
    return sum;
}

bool isAmicablePair (int x, int y) {
    int sum1 = getFactorsSum (x);
    int sum2 = getFactorsSum (y);

    if (sum1 == y && sum2 == x) {
        return true;
    } 
    return false;

}

void main (void) {

    int x, y;

    printf ("\nEnter 2 numbers : ");
    scanf ("%d%d", &x, &y);

    if (isAmicablePair (x, y)) {
        printf ("\n%d and %d are Amicable Pairs.\n", x, y);
    } else {
        printf ("\n%d and %d are NOT Amicable Pairs.\n", x, y);
    }

}
