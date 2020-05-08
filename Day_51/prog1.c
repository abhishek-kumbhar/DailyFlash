/*

Program 1: Write a Program that print multiplication of Series up to nth length if user provides length.

Series: (1) * (1+2) * (1+2+3) * … * (1+2+3+4+…+n).


*/



# include <stdio.h>

void main (void) {
    
    int x, mult = 1;

    printf ("\nEnter length of series : ");
    scanf ("%d", &x);

    for (int i = 1; i < x + 1; i++) {
        int sum = 0;
        for (int j = 1; j < i + 1; j++) {
            sum += j;   
        }
        mult *= sum;
    }

    printf ("\nThe multiplication of Series of length %d = %d\n", x, mult);

}

/*  Alternatives :

int n,mul;
	printf("Enter Number : ");
	scanf("%d", &n);
	
	mul = 1;
	for(int i = 1; i<= n; i++){
		mul = mul*((i*(i+1))/2);
	}
	printf("%d\n",mul);

*/

