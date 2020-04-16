/*

Program 4: Write a Program to Print following Pattern.

                       100 
                    81  64 
                49  36  25 
            16   9   4   1 


*/

extern int printf (const char *, ...);

void printPattern (int x) {

    int k = 10;

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            i + j > 2 ? printf ("%3d ", k * k) ? k-- : 1: printf ("    ");
        }
        printf ("\n");
    }

}



void main (void) {

    int x;

    printPattern (4);

}

/* Alternatives :

    int n;
	printf("Enter Size : ");
	scanf("%d", &n);
	int k = (n*(n+1))/2;
	for(int i = 1; i <= n; i++){
		for(int j = n; j >= 1 ; j--){
			if(j > i){
				printf("\t");
			}
			else{
				printf("%d\t",k*k);
				k--;
			}
		}
		printf("\n");
	}

*/
