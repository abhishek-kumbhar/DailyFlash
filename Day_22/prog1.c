/*
 
Program 1: Write a Program to whether a number entered by user is Prime
           Number or Not. 


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x;

    printf ("\nEnter a number : ");
    scanf ("%d", &x);
    
    if (x == 0 || x == 1) {
        printf ("\n%d is NOT a prime number.", x);
        return;
    }

    for (int i = 2; i < x / 2 + 1; i++) {
        if (x % i == 0) {
            printf ("\n%d is NOT a prime number.", x);
            return;
        }
    }

    printf ("\n%d is a prime number.", x);

}

/* Alternatives :

    int isPrime(int n) {
	if(n <= 3) {
		return n > 1;
	} else if(n % 2 == 0 || n % 3 == 0) {
		return 0;
	}

	int i = 5;

	while(i * i <= n) {
		if(n % i == 0 || n % (i + 2) == 0) {
			return 0;
		}	
		i += 6;
	}

	return 1;
}	

*/

