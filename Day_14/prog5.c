/*

Program 5: Write a Program which accepts date month and year from user and
           checks for the validity of date according to month.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {

    int no_of_days_in_months [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
    int x, y, z;
    
    printf("\nEnter day, month, year (In Number) : ");
    scanf("%d%d%d", &x, &y, &z);
    
    if(y > 0 && y < 13) {
        if ((z % 4 == 0 && z % 100 != 0) || (z % 400 == 0)) {
            if (x <= no_of_days_in_months[y - 1] && x > 0) {
                printf ("\nDate is valid.");
            } else if (y == 2 && (x <= no_of_days_in_months[y - 1] && x > 0)) {
                printf ("\nDate is valid.");
            } else {
                printf ("\nDate doesn't exist.");
            }
        }
    } else {
        printf ("\nDate doesn't exist.");
    }

}


/* Alternatives :

    int day,mn, yr;
	printf("Enter date dd mm yyyy : ");
	scanf("%d %d %d", &day, &mn, &yr);

	printf("%d/%d/%d\n", day, mn,yr);
	if(day <= 0 || mn <= 0 || yr <= 0 || day > 31 || mn > 12 ){
		printf("Invalid date\n");
		exit(0);
	}
	else if((mn <= 7 && day <= 31 && mn % 2 != 0) || (mn >= 8 && day <= 31 && mn % 2 == 0)){
		printf("Valid Date\n");
	}
	else if((mn != 2 && mn <= 7 && day <= 30 && mn % 2 == 0) || (mn >= 8 && day <= 30 && mn % 2 != 0)){
		printf("Valid Date \n");
	}

	else if(mn == 2 && yr % 100 == 0){
		if(yr % 400 == 0 && day <= 29){
			printf("Valid Date\n");
		}
		else if(day <= 28){
			printf("Valid Date\n");
		}
		else {
			printf("Invalid Date\n");
		}
	}
	else if(mn == 2 ){
		if(yr % 4 == 0 && day <= 29){
			printf("Valid Date\n");
		}
		else if(day <= 28){
			printf("Valid Date\n");
		}
		else {
			printf("Invalid Date\n");
		}
	}
	else {
		printf("Invalid Date\n");
	}


*/
