/*

Program 4: Write a Program to Print following Pattern
            1 2 3 4
            5 6 7 8
            9 10 11 12
            13 14 15 16


*/

extern int printf(const char *, ...);
extern int scanf(const char *, ...);


void main (void) {
    int x = 1, y;

    printf ("\nEnter no of Rows : ");
    scanf ("%d", &y);

    for (int i = 0; i < y; i++) {
        for (int j = 0; j < y; j++) {
            printf("%2d  ", x++);
        }
        printf("\n");
    }
}


/* Alternatives :

    for(int i = 1; i <= y * y; i++ ){
		if(i % y == 0){
			printf("%2d\n", i);
		}
		else{
			printf("%2d ", i);
		}
	}

*/
