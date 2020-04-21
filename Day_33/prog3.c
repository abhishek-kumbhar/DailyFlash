/*

Program 3: Write a Program to print AP in reverse order take last Element &
           Common Difference from user.

           {Note: Use While Loop}


*/


extern int printf (const char *, ...);
extern int scanf (const char *, ...);


void main (void) {
    
    int x, y;
    
    printf ("\nEnter last element in AP : ");
    scanf ("%d", &x);
    
    printf ("\nCommon difference : ");
    scanf ("%d", &y);

    printf ("\nA.P is : ");

    while (x != 0) {
        printf("%d ", x);
        x -= y;
    }

}
