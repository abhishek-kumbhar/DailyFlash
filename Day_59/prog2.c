/*

Program 2: Write a Program that accepts a String from user and and replaces every
           vowel from that String with largest alphabet from that string.


*/

# include <stdio.h>
# include <stdbool.h>


int findLargestAlphabet (char str [], int n) {
    int max = str [0], i = 0;
    while (str [i] != 0) {
        if (str [i] > max) {
            max = str [i];
        }
        i++;
    }
    return max;
}

bool isVowel (char x) {
    switch (x) {
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

int getSize (char str []) {
    int i = 0;
    while (str [i] != 0)
        i++;
    return i;
}

void iterate (char str [], int max) {
    int i = 0;
    while (str [i] != 0) {
        if (isVowel (str [i])) {
            str [i] = max;
        }
        i++;
    }
}

void main (void) {
    
    char str [30];

    printf ("\nEnter the String : ");
    scanf ("%s", str);
    
    int max = findLargestAlphabet (str, getSize (str));
    
    iterate (str, max);
    
    printf ("\nReplaced String is %s\n", str);

}
