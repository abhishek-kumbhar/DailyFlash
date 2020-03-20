/*

Program 1: Write a Program to check whether the Character is Uppercase or
           Lowercase Character.

*/

extern int printf(const char *, ...);
extern int scanf(const char *, ...);

void main (void) {

    char x;

    printf("\nEnter any character : ");
    scanf("%c", &x);

    if(c >= 65 && c <= 90) {
		printf("%c is in UpperCase \n", c);
	} else if (c >= 97 && c <= 122){
		printf("%c is in LowerCase \n", c);
	} else { 
		printf("%c is not alphabet \n", c);
	}

}

/*

Alternatives :

    1 ->  (x >= 'a' && x <= 'z') ? printf("\nletter %c is in Lowercase.\n", x) : ((x >= 'A' && x <= 'Z') ? printf("\nletter %c is in Uppercase.\n", x) : printf("\n%c is not Alphabet.\n", x);

    2 ->  (x > 64 && x < 91) ? printf("\n%c is in Uppercase.\n", x) : ((x > 96 && x < 123) ? printf("\n%c is in Lowercase.\n", x) : printf("\n%c is not Alphabet.\n", x));


*/
