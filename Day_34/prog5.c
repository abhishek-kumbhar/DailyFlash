/*

Program 5: Write a Program to check whether a number can be express as sum
           of two prime numbers.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void fillPrimeNumbers (int x, int array []) {
    int k = 0, flag;
    for (int i = 2; i < x + 1; i++) {
        flag = 0;
        for (int j = 2; j < i / 2 + 1; j++) {
            if (i % j == 0) {
                flag = 1;
            }
        }
        if (flag == 0) {
            array [k++] = i;
        }
    }
    array [k] = 999;
}



void main (void) {
    
    int x, array [50], flag = 0;

    printf ("\nEnter a number : ");
    scanf ("%d", &x);

    fillPrimeNumbers (x, array);

    for (int i = 0; array [i] != 999; i++) {
        for (int j = i + 1; array [j] != 999; j++) {
            if (x == array[i] + array[j]) {
                printf ("%d = %d + %d\n",x,  array[i], array[j]);
                flag = 1;
            }    
        }
    }

    if (flag == 0) {
        printf ("\n%d can't express as sum of two prime numbers.\n", x);
    }
    

}
