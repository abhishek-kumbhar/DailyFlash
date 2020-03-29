/*

Program 4: Write a Program to Print following Pattern.
            a
            A  A 
            a  a  a 
            A  A  A  A
            a  a  a  a  a


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {

    int x;

    printf ("\nEnter no of Rows : ");
    scanf ("%d", &x);

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < i + 1; j++) {
            (i % 2 == 0) ? printf("a  ") : printf("A  ");
        }
        printf("\n");
    }

}

/*  Alternatives :

    int n, flag;
	printf("Enter Size : ");
	scanf("%d", &n);

	if(n < 0){
		exit(0);
	}
	flag = 'A';
	for(int i = n; i >=1 ; i--) {
		flag = (flag == 'A')?'a':'A';
		for(int j = 1; j <= n-i+1; j++) {
			printf("%c ",flag);

		}
		printf("\n");
	}

*/
