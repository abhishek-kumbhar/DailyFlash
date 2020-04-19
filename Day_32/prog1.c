/*

Program 1: Write a Program that prints Sum an Arithmetic Progression (A.P.)
           series. Take Starting element, Total count of elements in A.P. & the Common
           Difference from user.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x, y, z, i = 0, sum = 0;
    
    printf ("\nStarting element : ");
    scanf ("%d", &x);
    
    printf ("\nNo of elements : ");
    scanf ("%d", &y);
    
    printf ("\nCommon difference : ");
    scanf ("%d", &z);
    
    printf("\nThe AP is : ");
    
    while (i < y) {
        sum += x;
        printf("%d ", x);
        x += z;
        i++;
    }
    
    printf(" = %d", sum);

}   
