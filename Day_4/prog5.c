/*

Program 5: Write a program to ASCII values of input character.


*/

#include <stdio.h> // for stdin

extern int printf(const char *, ...);
extern int scanf(const char *, ...);
int getc (FILE * stream);

void main (void) {
    char x;
    
    printf("\nEnter the character : ");
    scanf("%c", &x);

    printf("\nASCII Value of %c is %d.\n", x, x);
}

/* Alternatives :

    printf("Character : ");
	printf("ASCII : %d\n", getc(stdin));



*/
