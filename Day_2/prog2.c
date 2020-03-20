/*

Program 2: Write a Program to take a integer raging between 0 to 6 and print
           corresponding weekday


*/


extern int printf(const char *, ...);
extern int scanf(const char *, ...);

void main (void) {

   char days[7][11] = { {"Monday"},
                        {"Tuesday"},
                        {"Wednesday"},
                        {"Thursday"},
                        {"Friday"},
                        {"Saturday"},
                        {"Sunday"}
                    };

   int x;

   printf("\nEnter the number : ");
   scanf("%d", &x);

   printf("\n%s\n", days[x]);

}

/*

Alternatives :

     switch(x) {
        case 0 : 
            printf("Sunday\n");
            break;
        case 1 :
            printf("Monday\n");
            break;
        case 2 :
            printf("Tuesday\n");
            break;
        case 3 : 
            printf("Wednesday\n");
            break;
        case 4 : 
            printf("Thursday\n");
            break;
        case 5 : 
            printf("Friday\n");
            break;
        case 6 : 
            printf("Saturday\n");
            break;
        default :
            printf("Invalid Option\n");
    }


*/
