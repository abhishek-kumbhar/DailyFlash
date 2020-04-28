/*

Program 3: Write a Program that accepts a number from user and prints
           second Minimum digit from that number.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);


int getSecondMin (long int x) {
	int array [10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	while (x != 0) {
		array [x % 10] = 1;
		x /= 10;
	}

	int cnt = 0, i = 0;

	while (1) {
		if (cnt == 2) {
			break;
		}

		if (array [i] == 1) {
			cnt++;
		}
		
		i++;

	}

	i--;
	
	return i;

}


void main (void) {
	
	long int x;

	printf("\nEnter a number : ");
	scanf("%ld", &x);


	printf("\nSecond min digit from no %ld = %d", x, getSecondMin (x));

}
