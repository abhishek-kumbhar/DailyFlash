/*

Program 4: Write a Program to Print following Pattern.
            7
            6  5 
            5  4  3
            4  3  2  1


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);


void main (void) {
  
    int x, k;

    printf ("\nEnter no of Rows : ");
    scanf ("%d", &x);

    k = x * 2 - 1;
	for(int i = 1; i < x + 1; i++) {
		for(int j = 1; j <= i; j++) {
			printf("%d  ", k--);
		}
		k = x * 2 - 1 - i;
		printf("\n");
	}

}
