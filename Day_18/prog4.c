/*

Program 4: Write a Program to Print following Pattern.
            A  C  E  G
            B  D  F
            C  E
            D


*/


extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {

    int x;
    char a = 'A';

    printf ("\nEnter no of Rows : ");
    scanf ("%d", &x);

    for (int i = 0; i < x; i++) {
        for (int j = i; j < x; j++) {
            printf ("%c ", a);
            a += 2;   
        }
        a = 'B' + i;
        printf ("\n");
    }

}


/* Alternatives :

    int n;
	printf("Enter Size : ");
	scanf("%d", &n);

	if(n < 0)
		exit(0);
	for(int i = 1; i <= n; i++){
		for(int j = 0; j <= (n - i)*2; j=j+2){
			printf("%c ", 64 + i + j );
		}
		printf("\n");
	}

*/

