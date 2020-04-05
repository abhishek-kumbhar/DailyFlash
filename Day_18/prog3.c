/*

Program 3: Write a Program to Convert the entered distance in Kilometre by
           user into meter.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    float x;
    
    printf("\nEnter Distance in KM : ");
    scanf("%f", &x);

    printf ("\n%.2f KM is equal to %.2fm.\n", x, x * 1000);

}
