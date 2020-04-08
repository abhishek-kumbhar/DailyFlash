/*

Program 5: Write a Program that accepts 5 integer values from user and
           compares two consecutive inputs and if the second of them is lesser that the
           previous one then the code exits out of loop and prints the unexpected input.
           {Note: Use Break Statement}


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {

    int x, y = 0;

    printf ("\nEnter numbers : \n");
    for (int i = 0; i < 5; i++) {
        scanf ("%d", &x);
        if (x < y) {
            printf ("\nLoop is exited with input %d", x);
            break;
        }
        y = x;
    }

}

/*  Alternatives :

    int n[5];
	printf("Enter Numbers : ");
	scanf("%d",(n+0));
	for(int i = 1; i < 5; i++){
		scanf("%d", &n[i]);
		if(n[i-1] > n[i]){
			printf("Loop exited with %d\n", n[i]);
			break;
		}
	}

    


*/
