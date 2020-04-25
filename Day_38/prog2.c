/*

Program 2: Write a Program that calculates Square Root of a number ranging in 200 to 600


*/

extern int printf (const char *, ...);
double sqrt (double);

void main (void) {
    
    for (int i = 200; i < 601; i++) {
        printf ("Square root of %d = %.10f\n", i, sqrt(i));
    }
}
