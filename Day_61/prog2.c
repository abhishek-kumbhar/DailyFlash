/*

Program 2: Write a Program that accepts a String from user and prints the length of string.


*/

# include <stdio.h>

void main (void) {

    char str [50], cnt = 0;

    printf ("\nEnter the String : ");
    scanf ("%[^\n]%*c", str);

    for (int i = 0; str [i] != '\0'; i++) {
        cnt++; 
    }

    printf ("\nLength of entered  String : %d", cnt);
    
}
