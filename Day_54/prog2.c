/*

Program 2: Write a Program that accepts a String from user. Print Only ASCII
           values Vowels from that String.


*/


# include <stdio.h>
# include <stdbool.h>


bool isVowel (char ch) {
    switch (ch) {
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' :
        case 'A' :
        case 'E' :
        case 'I' :
        case 'O' :
        case 'U' :
            return true;
        default :
            return false;
    }
}

void main (void) {

    char str [30];

    printf ("\nEnter the String : ");
    scanf ("%[^\n]*c", str);

    printf ("\nVowels from entered string are :\n");
    for (int i = 0; str [i] != '\0'; i++) {
        if (isVowel (str [i])) {
            printf ("%c : %d\n", str [i], str [i]); 
        }
    }

}

