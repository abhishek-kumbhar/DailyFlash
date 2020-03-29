/*

Program 2: Write a Program which accepts two integers from user and swaps
           their insertion order.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x, y;
    
    printf("\nEnter first number : ");
    scanf("%d", &x);
    
    printf("\nEnter second number : ");
    scanf("%d", &y);

    printf("\nBefore Swap : %d  %d", x, y);

    x += y;
    y = x - y;
    x -= y;
    
    printf("\nAfter Swap  : %d  %d", x, y);

}

/*  Alternatives :

    int a, b;
	printf("Enter Numbers : \n");
	scanf("%d %d", &a, &b);

	printf("Before Swap :\n");
	printf("a : %d\n", a);
	printf("b : %d\n", b);
	
	b = a + b - (a = b);
	
	printf("After Swap :\n");
	printf("a : %d\n", a);
	printf("b : %d\n", b);

*/
