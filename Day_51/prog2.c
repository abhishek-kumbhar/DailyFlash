/*

Program 2: Write a Program that accepts a String (i.e. Array of Characters)
           from user. In addition, print that String.


*/



# include <stdio.h>

void main (void) {
    
    char str [30];
    
    printf ("\nEnter a String : ");
    scanf ("%[^\n]*c", str);

    printf ("\nYour entered String = %s\n", str);

}
