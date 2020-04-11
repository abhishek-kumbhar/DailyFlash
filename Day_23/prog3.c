/*
 
Program 3: Write a Program to that skips the occurrence of perfect numbers
           using continue statement. Print this sequence up to 100.
 

*/

extern int printf(const char *, ...);

void main (void) {
    
    for (unsigned short int i = 1; i < 101; i++) {
        unsigned short int sum = 0;
        for (unsigned short int j = 1; j < i / 2 + 1; j++) {
            i % j == 0 ? sum += j : 1;
        }
        if (sum == i) {
            continue;
        } else {
            printf("%hu ", i);
        }
    }

}
