/*

Program 4: Write a Program to Print following Pattern.
            3
            2  3 
            1  2  3
            0  1  2  3


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);


void main (void) {

    int a, x, k;

    printf ("\nEnter no of Rows : ");
    scanf ("%d", &a);
    
    k = a - 1;

    for (int i = 0; i < a; i++) {
        x = k;
        for (int j = 0; j < i + 1; j++) {
            printf("%d  ", x++);
        }
        k--;
        printf("\n");
    }

}

/* Alternatives : 

    for (int i = rows - 1; i >= 0 ; i--){
		for (int j = i; j < rows; j++){
			printf ("%3d ", j);
		}
		printf ("\n");
	}

    ..........................................

    for(int i = 0; i < rows; i++) {
		for(int j = 0; j <= i; j++) {
			printf("%3d ", rows - 1 - i + j);
		}
		printf("\n");
	}



*/
