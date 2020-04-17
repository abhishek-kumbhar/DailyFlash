/*
 
Program 1: Write a Program to print sum of following series. Take the limiting
           factor from user and print sum up to that element.

Series: 1, 11, 111, 1111, 11111, 111111, 111111 . . .


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);
double pow (double, double);

void main (void) {
    
    int x;
    long int sum = 0, total = 0;

    printf ("\nEnter no of terms : ");
    scanf ("%d", &x);
    
    for (int i = 0; i < x; i++) {
        sum += 1 * pow (10, i);
        total += sum;
    }

    printf ("\nThe sum is : %ld\n", total);

}
