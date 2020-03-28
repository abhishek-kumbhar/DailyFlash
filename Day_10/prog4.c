/*

Program 4: Write a Program to Print following Pattern.
            0
            1  1 
            0  0  0 
            1  1  1  1
            0  0  0  0  0


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x;

    printf ("\nEnter no of Rows : ");
    scanf ("%d", &x);

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < i + 1; j++) {
            (i % 2 == 0) ? printf("0  ") : printf("1  ");
        }
        printf("\n");
    }

}


/*  Alternatives :

    flag = 1;
	
    for (int i = n; i > 0 ; i--) {
		flag = (flag == 1) ? 0 : 1;
		for (int j = 1; j <= n - i + 1; j++) {
			printf("%d ",flag);
		}
		printf("\n");
	}


*/
