/*

Program 5: Write a Program calculates to accepts integers from user using do-
           while loop until user enters a number that is divisible by 7.


*/

# include <stdio.h>

void main (void) {
    
    int x;
    
    do {
        printf ("\nEnter a number : ");
        scanf ("%d", &x);
        if (x % 7 == 0) {
            printf ("\nExiting code... %d is divisible by %d.", x, 7);
            return;
        } else {
            continue;
        }
    } while (1);

}

/*  Alternatives :

    int num, f = 0;
	do {
		if(f > 0)
			printf("%d\n", num );
		scanf("%d", &num);
		f = 1;
	} while(num % 7 != 0);

*/
