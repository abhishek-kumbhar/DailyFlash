/*

Program 3: Write a Program that accepts a number from user and prints
	       minimum & maximum digit from that number.


*/

# include <stdbool.h>

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

struct pair {
	int min;
	int max;
};

void getMinMax (long int x, struct pair *p) {
	bool array [10] = {
					   false, false, false, false, false,
					   false, false, false, false, false
					  };
	
	while (x != 0) {
		array [x % 10] = true;
		x /= 10;
	}

	int i = 0, j = 9;

	while (array [i] != true) {
		i++;
	}

	while (array [j] != true) {
		j--;
	}

	p -> min = i;
	p -> max = j;
	
}

void main (void) {

	long int x;
	struct pair p;

	printf ("\nEnter a number : ");
	scanf ("%ld", &x);
	
	getMinMax (x, &p);

	printf("\nMin digit = %d & Max digit = %d", p.min, p.max);

	
}
