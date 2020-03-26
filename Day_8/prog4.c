/*

Program 4: Write a Program to simulate simple calculator. Accept two integers
           from user and sign of operation to perform.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    float x, y;
    char z;
    
    printf("\nEnter First number : ");
    scanf("%f", &x);
    
    printf("\nEnter Second number : ");
    scanf("%f", &y);
    
    printf("\nEnter the sign of Operation : ");
    scanf(" %c", &z);
    
    switch(z) {
        case '+' : printf("\nAddition of %.2f & %.2f is %.2f", x, y, x + y);
                   break;
        case '-' : printf("\nSubstraction of %.2f & %.2f is %.2f", x, y, x - y);
                   break;
        case '*' : printf("\nMultiplication of %.2f & %.2f is %.2f", x, y, x * y);
                   break;
        case '/' : y != 0 ? printf("\nDivision of %.2f & %.2f is %.2f", x, y, x / y) : printf ("\nDivision will NOT perform.");
                   break;
        default : printf ("\nInvalid Input\n");
    }

}
