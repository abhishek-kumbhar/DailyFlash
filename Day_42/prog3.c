/*

Program 3: Write a Program that computes & prints Squares of numbers
           entered by user using do while loop until user enters a negative number.


*/

# include <stdio.h>

void main (void) {
    
    int x;
    
    do {
        printf ("\nEnter a number : ");
        scanf ("%d", &x);
        if (x < 0) {
            printf ("\nExiting ... You entered Negative Number.\n");
            return;
        }

        printf ("%d * %d = %d\n", x, x, x * x);
    
    } while (1);

}


/*  Alternatives :

    int num, f = 0;
	do {
		if(f > 0)
			printf("%d\n", num * num);
		scanf("%d", &num);
		f = 1;
	} while(num >= 0);

*/
