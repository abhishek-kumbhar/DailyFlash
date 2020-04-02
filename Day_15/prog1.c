/*

Program 1: Write a Program to Swap two entered number without using a
           third temporary variable.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x, y;
    
    printf("\nEnter 2 numbers : ");
    scanf("%d%d", &x, &y);
    
    printf("\nBefore swapping : x = %d & y = %d", x, y);

     y = (x + y) - (x = y);
    
    printf("\nAfter swapping : x = %d & y = %d", x, y);

}

/* Alternntives :

    x = x + y;
    y = x - y;
    x = x - y;

..................... 


    x = x * y;
    y = x / y;
    x = x / y;


*/
