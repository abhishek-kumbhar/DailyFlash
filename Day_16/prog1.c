/*

Program 1: Write a Program to that prints the series which increases with the
           number entered by user.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {

    int x, n, j = 1;
    
    printf("\nEnter the number : ");
    scanf("%d", &x);
    
    printf("\nHow many numbers you want in Series ? ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("%d  ", j);
        j += x;
    }

}

/* Alternatives :

    for (int i = 1; i < n * n + 1; i = i + n) {
		printf("%d ", i);
	}

*/
