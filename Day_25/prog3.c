/*

Program 3: Write a Program to that accepts an integer value from user and
           prints all even numbers from that number to 0 using while loop.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x;
    
    printf ("\nEnter a number : ");
    scanf ("%d", &x);

    printf ("\nEven numbers from %d to 0 are : \n", x);
        
    while (x > -1) {
        x % 2 == 0 ? printf ("%d  ", x) : 1;
        x -= 1;
    }

}

