/*

Program 1: Write a Program to print an Arithmetic Progression (A.P.) series.
           Take Starting element, Total count of elements in A.P. & the Common 
           Difference from user.

           {Note: an AP (i.e. Arithmetic Progression is such series which has common
            difference between every consecutive elements, AP of common difference 2
            starting from 20 can be: 20, 22, 24, 26 . . .}


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x, y, z, i = 0;
    
    printf ("\nStarting element : ");
    scanf ("%d", &x);
    
    printf ("\nNo of elements : ");
    scanf ("%d", &y);
   
    printf ("\nCommon difference : ");
    scanf ("%d", &z);
    
    printf ("\nThe AP is : ");
    while (i < y) {
        printf ("%d  ", x);
        x += z;
        i++;
    }

}   
