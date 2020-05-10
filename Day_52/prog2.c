/*

Program 2 : Write a Program that accepts a String from user. Print that string
               character by character.


 */


# include <stdio.h>

void main (void) {
    
    char str [30];

    printf ("\nEnter the String : ");
    scanf ("%[^\n]*c", str);
    
    printf ("\ncharacters in string are : ");
    for (int i = 0; str [i] != '\0'; i++) {
        printf ("%c ", str [i]);
    }

}
