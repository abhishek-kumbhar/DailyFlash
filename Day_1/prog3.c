/*
 
Program 3: Write a Program to Find whether the character is an alphabet, a
           digit or a special character

*/

extern int printf(const char *, ...);
extern int scanf(const char *, ...);

void main (void) {
    char x;
    printf("\nEnter any character : ");
    scanf("%c", &x);

    (x >= 'a' && x <= 'z' || x >= 'A' && x <= 'Z') ?  printf("\nIt is Alphabet\n") : (x >= '0' && x <= '9') ? printf("\nIt is a Number\n") : printf("\nIt is Special Symbol\n");
}

/* Alternatives : 
 
   ((x >= 65 && x <=90) || (x >= 97 && x <= 122)) ? printf("\nIt is Alphabet.\n") : ((x >= 48 && x <=57) ? printf("\nIt is a Number.\n") : printf("\nIt is Special Symbol.\n"));

*/
