/*

Program 2: Write a Program that replaces every occurrence of 1 with a digit N from that number if user provides both the number & digit N to replace with 1.


*/

# include <stdio.h>
# include <math.h>

int replace1byY (int x, int y) {
    int sum = 0, i = 0;
    while (x != 0) {
        if (x % 10 == 1) {
            sum += y * pow (10, i);
        } else {
            sum += x % 10 * pow (10, i);
        }
        i++;
        x /= 10;
    }
    return sum;
}

void main (void) {

    int x, y;

    printf ("\nEnter a number : ");
    scanf ("%d", &x);

    printf ("\nEnter number to be replaced with 1 : ");
    scanf ("%d", &y);
    
    int replaced = replace1byY (x, y);

    printf ("\nReplaced no : %d\n", replaced);

}
