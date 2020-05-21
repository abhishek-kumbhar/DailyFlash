/*

Program 2: Write a Program that accepts a String from user then finds and
           prints the occurrence of vowels in that string.


*/

# include <stdio.h>


int getLength (char str []) {
    int i = 0;
    while (str [i] != '\0') {
        i++;
    }
    return i;
}

int isVowel (char c) {
    switch (c) {
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
            return 1;
        default :
            return 0;
    }
}

void main (void) {
    char str [50];
    int cnt = 0;

    printf ("\nEnter the String : ");
    scanf ("%[^\n]%*c", str);
    
    int len = getLength (str);
    
    for (int i = 0; i < len; i++) {
        if (isVowel (str [i])) {
            cnt++;
        }
    }

    printf ("\nThe Vowels occured for %d times in that string.\n", cnt);
     
}
