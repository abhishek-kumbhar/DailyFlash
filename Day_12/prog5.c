/*

Program 5: Write a Program that accepts Three integers from user and prints
           maximum number from them.


*/

extern int printf(const char *, ...);
extern int scanf(const char *, ...);

void main (void) {
    
    int x, y, z;
    
    printf("\nEnter 3 numbers : ");
    scanf("%d%d%d", &x, &y, &z);

    (x > y && x > z) ? printf("\nThe maximum number amongst %d, %d & %d is %d", x, y, z, x) : ( 
    (y > x && y > z) ?  printf("\nThe maximum number amongst %d, %d & %d is %d", x, y, z, y) :     
    printf("\nThe maximum number amongst %d, %d & %d is %d", x, y, z, z)); 
}

/*  Alternatives :

    if(a >= b){
		if(a >= c){
			printf("The maximum number amongst %d %d and %d is %d\n", a,b,c,a);
		}
		else {
			printf("The maximum number amongst %d %d and %d is %d\n", a,b,c,c);
		}
	}
	else if(b >= c)
		printf("The maximum number amongst %d %d and %d is %d\n", a,b,c,b);
	else
		printf("The maximum number amongst %d %d and %d is %d\n", a,b,c,c);

*/
