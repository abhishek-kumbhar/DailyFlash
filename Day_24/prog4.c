/*

Program 4: Write a Program to Print following Pattern.
                         
                          3
                     3   12
                3    8   15
            3   4   10   18
                  

*/


extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void printPattern (int x) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            if (i + j > x - 2) {
                if (i + j == x - 1) {
                    printf ("%2d ", i + j);
                } else {
                    printf ("%2d ", (i + j) * j);
                }
            } else {
                printf ("   ");
            }
        }
        printf ("\n");
    }
}

void main (void) {

    int x;

    printf ("\nEnter no of Rows : ");
    scanf ("%d", &x);

    printPattern (x);

}


/* Alternatives :


	int n;
	printf("Enter size : ");
	scanf("%d", &n);

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(j < (n-i-1)){
				printf("\t");
			}
			else
				printf("%d\t", (j != (n-i-1))?(j*(j+i)):(3));
		}
		printf("\n");
	}

*/
