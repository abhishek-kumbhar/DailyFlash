/*

Program 4: Write a Program to Print following Pattern
            2 4 6 8
            2 4 6 8
            2 4 6 8
            2 4 6 8


*/

extern int printf(const char *, ...);
extern int scanf(const char *, ...);


void main (void) {

    int x;
    
    printf ("\nEnter no of Rows : ");
    scanf ("%d", &x);

    for (int i = 0; i < x; i++) {
        int k = 0;
        for (int j = 0; j < x; j++) {
            printf("%d  ", k += 2);
        }
        printf("\n");
    }
}

/*  Alternatives :

    for(int i = 0; i < x; i++) {
		for(int j = 0; j < x; j++){
			printf("%d\t", 2 * (j + 1));
		}
		printf("\n");
	}

.................................................

    int k = 2;
    for(int i = 1; i <= x * x; i++){
		if(i % x == 0) {
			printf("%2d\n", k);
			k = 2;
		}
		else{
			printf("%2d ", k);
			k += 2;
		}
	}

..................................................

*/
