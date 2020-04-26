/*

Program 3: Write a Program that accepts a number from user and prints
           second Maximum digit from that number.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);


int getSecondMax (long int x) {
	int array [10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	while (x != 0) {
		array [x % 10] = 1;
		x /= 10;
	}

	int cnt = 0, i = 9;

	while (1) {
		if (cnt == 2) {
			break;
		}

		if (array [i] == 1) {
			cnt++;
		}
		
		i--;

	}

	i++;
	
	return i;

}


void main (void) {
	
	long int x;

	printf("\nEnter a number : ");
	scanf("%ld", &x);


	printf("\nSecond max digit from no %ld = %d", x, getSecondMax (x));

}

/*	Alternatives :

	max = 0, max2 = 0;

	while(temp > 0){

		digit = temp%10;
		if (digit > max){
			max2 = max;
			max = digit;
		}
		else if(digit > max2){
			max2 = digit;
		}
		temp/=10;
	}

*/
