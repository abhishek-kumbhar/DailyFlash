/*

Program 2: Write a Program that accepts a String from user and reverse the string.


*/

# include <stdio.h>

void reverse (char str [], int cnt) {
    for (int i = 0; i < cnt / 2; i++) {
        str [i] = str [i] + str [cnt - i - 1] - (str [cnt - i - 1] = str [i]);
    }
}

void main (void) {

    char str [30], cnt = 0;

    printf ("\nEnter the String : ");
    scanf ("%[^\n]*c", str);

    for (int i = 0; str [i] != '\0'; i++) {
        cnt++; 
    }

    reverse (str, cnt);

    printf ("\nReversed String : ");
    
    printf ("%s", str);

}
