/*

Program 2: Write a Program that calculates Square Root of a number ranging in 1 to n.


*/

# include <stdbool.h>

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

int getSqrt (int x) {
    if (x == 0 || x == 1) {
        return x;
    }
    
    int i = 1, res = 1;

    while (res <= x) {
        i++;
        res = i * i;
    }

    return i - 1;

}


void main (void) {

    int x;
   
    printf ("\nEnter a number : ");
    scanf ("%d", &x);

    printf ("\nSquare roots are NOT in fraction.\n");
    printf ("\nSquare roots of numbers from 1 to %d are : \n", x);

    for (int i = 1; i < x + 1; i++) {
        printf ("Square root of %2d = %2d\n", i,getSqrt (i));
    }

}


/*  Alternatives :

    printf("Enter num1 : ");
	int num1;
	scanf("%d", &num1);
	int num2;
	printf("Enter num2 : ");
	scanf("%d", &num2);
	double sqrt;
	double  temp;
	for(int i = num1;i  <= num2; i++) {
		sqrt = i / 2;
		temp = 0;
		while(sqrt != temp) {
			temp = sqrt;
			sqrt = (i / temp + temp) / 2;
		}
		printf("%f ", sqrt);
	}
	return 0;


*/



