/*

Program 5: Write a C program to calculate the factorial of a given number.


*/

extern int printf(const char *, ...);
extern int scanf(const char *, ...);

int fact(int x) {
    if (x == 0) {
        return 1;
    } 
     return (x * fact(x - 1));

}

void main (void) {
    
    int  x;
    
    printf("\nEnter a number : ");
    scanf("%d", &x);

    printf("\nFactorial of %d = %d", x, fact(x));

}


/*  Alternatives :

int num, fact = 1;
	
    printf("Input : ");
	scanf("%d", &num);
	
    for(int i = 1; i <= num; i++)
		fact *= i;
	
    if(num >= 0)
		printf("Fact : %d", fact);
	else
		printf("Enter valid num.");
	
    return 0;
    

*/
