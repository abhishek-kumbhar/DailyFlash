/*

Program 2: Write a Program that replaces every occurrence of 1 with maximum digit from that number if user provides the number.


*/

# include <stdio.h>
# include <math.h>


int getMax (int x) {
    int max = 0;
    while (x != 0) {
        if (max < x % 10) {
            max = x % 10;
        }
        x /= 10;
    }
    return max;
}

int replace1byMax (int x) {
    int sum = 0, i = 0;
    int max = getMax (x);
    while (x != 0) {
        if (x % 10 == 1) {
            sum += max * pow (10, i);
        } else {
            sum += x % 10 * pow (10, i);
        }
        i++;
        x /= 10;
    }
    return sum;
}

void main (void) {

    int x;

    printf ("\nEnter a number : ");
    scanf ("%d", &x);
    
    int replaced = replace1byMax (x);

    printf ("\nReplaced no : %d\n", replaced);

}
