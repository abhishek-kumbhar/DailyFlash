/*

Program 1: Write a Program to that prints series of Prime number ranging
           between 1 to n.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {

    int n, flag;
    printf ("\nEnter end of Series : ");
    scanf ("%d", &n);
    
    printf ("\nPrime numbers between 1 & %d are : \n\n", n);

    for (int i = 2; i < n + 1; i++) {
        flag = 0;
        for (int j = 2; j < i / 2 + 1; j++) {
            i % j == 0 ? flag = 1 : 1;
        }   
        flag == 0 ? printf ("%d  ", i) : 1;
    }

}

/* Alternatives :

    int arr[101];
	for(int i = 0; i < 101; i++) {
		arr[i] = 1;
	}
	for(int i = 2; i * i <= 100; i++) {
		if(arr[i]) {
			for(int j = i * i; j <= 100; j += i) {
				arr[j] = 0;
			}
		}
	}

	for(int i = 2; i < 101; i++) {
		if(arr[i]) {
			printf("%d ", i);
		}
	}
	return 0;

*/
