/*

Program 3: Write a Program to check if a year is leap year or not.  
            {Note: If a year is divisible by 4 then it is leap year but if the year is century
            year like 2000, 1900, 2100 then it must be divisible by 400}


*/

extern int printf(const char *, ...);
extern int scanf(const char *, ...);

void main (void) {
    int year;
    printf("\nEnter the year : ");
    scanf("%d", &year);

    ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? printf("\nYear is Leap Year.") : printf("\nYear is NOT Leap Year.");
    
}

/*  Alternatives :

    if (year % 4 == 0){
		if (year % 100 == 0 && year % 400 != 0)
			printf("Is not leap year");
		else
			printf("Is leap year");
	}else{
		printf("Is not leap year");
	}


*/
