/*

Program 5: Write a Program that calculates the Greatest Common Divisor of
           two entered numbers.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x, y, max = 0;
    
    printf("\nEnter 2 numbers : ");
    scanf("%d%d", &x, &y);

    int k = x < y ? x : y;
   
    for (int i = 1; i < k / 2 + 1; i++) {
        (k % i == 0) ?  (y % i == 0) ? max = i : 1 : 1;
    }
    printf("\nThe GCD of %d & %d = %d", x, y, max);

}

/* Alternatives :

    int num1, num2, rem = 1;
	printf("num1 : ");
	scanf("%d", &num1);
	printf("num2 : ");
	scanf("%d", &num2);
	while(1) {
		rem = num1 % num2;
		if(rem == 0)
			break;
		num1 = num2;
		num2 = rem;
	}
	printf("gcd : %d", num2);


*/
