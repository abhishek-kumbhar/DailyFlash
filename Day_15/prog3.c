/*

Program 3: Write a Program to that accepts two integers from user and
           calculates the Quotient & Reminder from their division


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x, y;
    
    printf("\nEnter 2 numbers : ");
    scanf("%d%d", &x, &y);
    
    printf("\nQuotient = %d\nReminder = %d", x / y, x % y);

}
