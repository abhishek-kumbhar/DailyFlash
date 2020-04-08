/*

Program 3: Write a Program to that accepts 10 integers from user and breaks
           the loop of accepting numbers if user enters a negative number.
           {Note: Use Break Statement}


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {

    int x;
    
    printf ("\nEnter numbers : \n");

    for (int i = 0; i < 10; i++) {
        scanf ("%d", &x);
        if (x < 0) {
            printf ("\nNegative number entered, Exiting the loop...");
            break;
        }
    }

}
