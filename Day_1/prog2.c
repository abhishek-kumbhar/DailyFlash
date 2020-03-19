/*
 
Program 2: Write a Program to check whether the Character is Vowel or
           Consonant.

*/


extern int printf(const char *, ...);
extern int scanf(const char *, ...);

void main (void) {
    char x;
   
    printf("\nEnter any character : ");
    scanf("%c", &x);

    ((x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') || (x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U') ) ?  printf("\nIt is Vowel\n") : printf("\nIt is Consonent\n");

}

/* Alternative : 
 
    switch (x) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("\n%c is Vowel.\n", x);
            break;
        default:
            printf("\n%c is Consonant.\n", x);
    }

*/
