/*
 
Program 5: Write a Program that takes an array as input from user and prints
           the array in reverse order.
 
 
 */

extern int printf (const char *, ...);
extern int scanf (const char * , ...);


void main (void) {
    
    int i, x, array [20];

    printf ("\nEnter size of Array : ");
    scanf ("%d", &x);

    printf ("\nEnter elements of array : ");
    
    for (i = 0; i < x; i++) {
        scanf ("%d", &array [i]);
    }
    
    printf ("\nArray in Reversed order : ");
    
    for (int j = i - 1; j > -1; j--) {
        printf ("%d ", array [j]);
    }

}
