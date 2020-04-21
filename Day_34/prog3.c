/*

Program 3: Write a Program that takes a number as input from user and prints
           it into words.


*/


extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void reverse (long int * x) {
    long int rev = 0;
    while (*x != 0) {
        rev = rev * 10 + *x % 10;
        *x /= 10;
    }
    *x = rev;
}


void main (void) {
    
    long int x;
    
    printf ("\nEnter a number : ");
    scanf ("%ld", &x);

    reverse (&x);

    while (x != 0) {
        switch (x % 10) {
            case 0 : printf("Zero ");
                     break;
            case 1 : printf("One ");
                     break;
            case 2 : printf("Two ");
                     break;
            case 3 : printf("Three ");
                     break;
            case 4 : printf("Four ");
                     break;
            case 5 : printf("Five ");
                     break;
            case 6 : printf("Six ");
                     break;
            case 7 : printf("Seven ");
                     break;
            case 8 : printf("Eight ");
                     break;
            case 9 : printf("Nine ");
                     break;

        }
        x /= 10;
    }

}
