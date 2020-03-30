/*

Program 2: Write a Program that accepts Two integers from user and prints
           minimum number from them.


*/


extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x, y;
    
    printf("\nEnter 2 numbers : ");
    scanf("%d%d", &x, &y);
    
    x < y ? printf("\nThe Minimum number amongst %d & %d is %d", x, y, x) : printf("\nThe Minimum number amongst %d & %d is %d", x, y, y);

}
