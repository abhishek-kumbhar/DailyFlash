/*

Program 4: Write a Program to Print following Pattern.

                     #   
                  #  *
               #  *  *
            #  *  *  *


*/


extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void printPattern (int x) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            if (i + j > x - 2) {
                if (i + j == x - 1) {
                    printf ("# ");
                } else {
                    printf ("* ");
                }
            } else {
                printf ("  ");
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

/*  Alternatives :

    int n;
	printf("Enter Size : ");
	scanf("%d", &n);

	for(int i = 1; i <= n; i++){
		for(int j = n; j >= 1 ; j--){
			if(j > i){
				printf("\t");
			}
			else{
				printf("%c\t",(i==j)?('#'):('*'));
			}
		}
		printf("\n");
	}	

*/
