/*

Program 5: Write a Program that accepts Three integers from user and prints
           minimum number from them.


*/


extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x, y, z;
    
    printf("\nEnter 3 numbers : ");
    scanf("%d%d%d", &x, &y, &z);

    (x < y && x < z) ? printf("\nMinimum is %d", x) : (y < x && y < z) ? printf("\nMinimun is %d", y) : printf("\nMinimun is %d", z); 

}
