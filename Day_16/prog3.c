/*

Program 3: Write a Program to Print following Pattern.
            A  A  A  A  A
            B  B  B  B
            C  C  C
            D  D
            E


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x;

    printf ("\nEnter no of Rows : ");
    scanf ("%d", &x);

    for (int i = 'A'; i < 'A' + x; i++) {
        for (int j = 'A'; j < 'A' + x; j++) {
            i + j < 2 * 'A' + x ? printf ("%c ", i) : 1;
        }
        printf ("\n");
    }

}

/* Alternatives :

    for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n-i+1; j++){
			printf("%c\t", 64 + i);
		}
		printf("\n");
	}

*/
