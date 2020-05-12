/*

Program 2: Write a Program that accepts a String from user in UPPERCASE.
           Print that string in lowercase.


*/

# include <stdio.h>

void main (void) {
    
    char str [30];

    printf ("\nEnter the String (UPPERCASE) : ");
    scanf ("%[^\n]*c", str);

    printf ("\nString in Lowercase : ");
    for (int i = 0; str [i] != '\0'; i++) {
            printf ("%c", str [i] + 32); 
        }

}

