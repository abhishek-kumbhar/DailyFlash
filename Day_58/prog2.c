/*

Program 2: Write a Program that accepts a String from user and replaces every
           vowel from that String with next alphabet.


*/

# include <stdio.h>
# include <stdlib.h>

bool isVowel (char c) {
    switch (c) {
        case 'A' :
        case 'E' :
        case 'I' :
        case 'O' :
        case 'U' :
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' :
            return true;
        default :
            return false;
    }
}

void main (void) {

    char str [30], cnt = 0;

    printf ("\nEnter the String : ");
    scanf ("%[^\n]*c", str);

    for (int i = 0; str [i] != '\0'; i++) {
        if (isVowel (str [i])) {
            str [i] = str [i] + 1;
        }
    }

    printf ("\nReplaced String : %s\n", str);

}
