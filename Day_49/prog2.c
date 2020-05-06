/*

Program 2: Write a Program that replaces every occurrence of n1 with a digit n2 from that number if user provides the number & digit n1 to replace and digit n2 to replace with n1.


*/

# include <stdio.h>
# include <math.h>

int replaceYbyZ (int x, int y, int z) {
    int sum = 0, i = 0;
    while (x != 0) {
        if (x % 10 == y) {
            sum += z * pow (10, i);
        } else {
            sum += x % 10 * pow (10, i);
        }
        i++;
        x /= 10;
    }
    return sum;
}

void main (void) {

    int x, y, z;

    printf ("\nEnter a number : ");
    scanf ("%d", &x);

    printf ("\nEnter digit to be replace : ");
    scanf ("%d", &y);

    printf ("\nEnter digit to be replaced with %d : ", y);
    scanf ("%d", &z);
    
    int replaced = replaceYbyZ (x, y, z);

    printf ("\nReplaced no : %d\n", replaced);

}
