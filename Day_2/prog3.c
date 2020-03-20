/*

Program 3: Write a Program to take number of month and print the number of
           days in that month.


*/

extern int printf(const char *, ...);
extern int scanf(const char *, ...);

void main (void) {
    int no_of_days_in_months [13] = {0 , 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char months [13][15] = {
                            {"DUMMY"},
                            {"January"}, 
                            {"February"},
                            {"March"}, 
                            {"April"}, 
                            {"May"}, 
                            {"June"}, 
                            {"July"},
                            {"August"}, 
                            {"September"}, 
                            {"October"}, 
                            {"November"}, 
                            {"December"}
                        };
    int x;
    printf("\nEnter number : ");
    scanf("%d", &x);

    printf("\n%s is a %d day's month.\n", months[x], no_of_days_in_months[x]);

}

/*

Alternatives : 

    if ((x >= 1 && x <= 7 && x % 2 == 1) || (x >= 8 && x <= 12 && x % 2 == 0)) {
        printf("\nNo of days 31.\n");
    } else if (x == 2) {
        printf("\nNo of days 28.\n");
    } else if (x <= 12 && x >= 1) {
        printf("\nNo of days 30.\n");
    } else {
        printf("\nInvalid Option");
    }


    n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12 ? printf("31 days") : n != 2 && n > 0 && n <= 12 ? printf("30 days") : n == 2 ? printf("28 or 29 days") : printf("Enter valid month"); 


*/
