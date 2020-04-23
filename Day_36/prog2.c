/*

Program 2: Write a Program that calculates Square Root of a number entered by user.

           {Note: Do not use library functions}


*/

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

    printf ("\nSquare root of %d = %d\n", x, getSqrt (x));

}



/*  Alternatives :

    int num;
	printf("Enter num : ");
	scanf("%d", &num);
	int sqrt = num / 2;
	int temp = 0;
	while(sqrt != temp) {
		temp = sqrt;
		sqrt = (num / temp + temp) / 2;
	}
	printf("Sqrt of %d is %d", num, sqrt);

    

*/
