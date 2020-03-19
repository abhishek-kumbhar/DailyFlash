/*

Program 1: Write a Program to check whether the Character is Alphabet or Not.

*/

extern int printf(const char *, ...);
extern int scanf(const char *, ...);

void main (void) {
    char x;
    
    printf("\nEnter any character : ");
    scanf("%c", &x);

    
    if ((x >= 65 && x <= 90) || (x >= 97 && x <= 122)) {
        printf("\nIt is an alphabet.\n");
    } else {
        printf("\nIt is NOT an alphabet.\n");
    }
}

/* Alternative :
 
 (x >= 'a' && x <= 'z' || x >= 'A' && x <= 'Z') ?  printf("\nIt is Alphabet.\n") : printf("\nIt is NOT Alphabet.\n");


 */
