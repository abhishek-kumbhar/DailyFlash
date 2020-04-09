/*

Program 3: Write a Program to that skips the occurrence of numbers that are
           divisible by 7 using continue statement. Print this sequence up to 100.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    for (int i = 1; i < 101; i++) {
        if (i % 7 == 0) {
            continue;
        } else {
            printf ("%d ", i);
        }       
    }

}
