/*

Program 5: Write a Program that prints frequency of each unique digit from a
           number provided by user.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void getFrequency (long int x) {
    long int y = x;
    int array [10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    while (x != 0) {
        array [x % 10]++;
        x /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (array [i] != 0) {
            printf ("Frequency of %d is %d\n", i, array [i]);
        }
    }
    
}

void main (void) {

    long int x;

    printf ("\nEnter a number : ");
    scanf ("%ld", &x);

    getFrequency (x);

}
