/*

Program 3: Write a Program to take inputs from user and print them using
           while loop until user enters a negative number.


*/


extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    signed short int x = 1;
    
    while (x > -1) {
        scanf ("%hd", &x);
        x > -1 ? printf ("%hd  \n", x) : 1;
    }

}

/*  Alternativs :


    int n;
	_Bool k = 1;
	while(k){
		scanf("%d", &n);
		if(n < 0)
			exit(0);
		printf("%d\n", n);
	}


*/
