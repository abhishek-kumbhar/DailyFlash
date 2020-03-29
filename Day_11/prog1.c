/*

Program 1: Write a Program to print series of odd numbers ranging between
           two numbers entered by user.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x, y;
    
    printf("\nEnter Min of series : ");
    scanf("%d", &x);
    
    printf("\nEnter Max of series : ");
    scanf("%d", &y);
    
    printf("\nSeries of Odd Numbers Ranging between %d & %d : \n", x, y);
    
    for (int i = x; i < y + 1; i++) {
        (i % 2 == 1) ? printf("%d  ", i) : 1;
    }

}

/*  Alternatives :

	int n1, n2;
	printf("Enter Positive Numbers : \n");
	scanf("%d %d", &n1, &n2);

	if(n1 < 0 || n2 < 0 || n1 > n2){
		printf("Enter Positive Numbers or second Number should greater than first Number\n");
		exit(0);
	}
    
	for(int i = n1; i <= n2; i++) {
		if(i % 2 != 0 )
			printf("%d ", i);
	}
	printf("\n");

*/
