/*

Program 2: Write a Program that replaces every occurrence of 1 with 2 in the number entered by user.


*/


# include <stdio.h>
# include <math.h>

int replace1by2 (int x) {
    int sum = 0, i = 0;
    while (x != 0) {
        if (x % 10 == 1) {
            sum += 2 * pow (10, i);
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
    
   int replaced = replace1by2 (x);
   printf ("\nReplaced no : %d\n", replaced);

}


