/*

Program 3: Write a Program to that skips the occurrence of numbers that are
           divisible by 2 using continue statement. Print this sequence up to 100.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x;

    printf ("\nEnter a number : ");
    scanf ("%d", &x);


    for (int i = 0; i < x + 1; i++) {
        if (i % 2 == 0) {
            continue;
        } else {
            printf ("%d ", i);
        }
    }

}
