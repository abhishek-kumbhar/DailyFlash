/*

Program 5: Write a Program that accepts Two integers from user and prints
           maximum number from them


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x, y;
    
    printf("\nEnter two numbers : ");
    scanf("%d%d", &x, &y);

    (x > y) ? printf("\nThe maximum is %d", x) : printf("\nThe maximum is %d", y);

}


/*

Alternatives :

    int a, b;
	printf("Enter Numbers : \n");
	scanf("%d %d", &a, &b);

	printf("Maximum amongst %d and %d : %d\n", a, b,(a >= b) ? a : b);


*/

