/*

Program 3: Write a Program to Convert the Hours entered by user into Seconds.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
   
    float x;
    
    printf("\nEnter hr's : ");
    scanf("%f", &x);

    printf("\n%.2f hr = %.0f seconds", x, x * 3600);

}
