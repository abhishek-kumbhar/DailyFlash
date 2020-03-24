/*

Program 4 : Write a Progr am to accept 10 integers from user and prin t s the
            sum & average of entered numbers .


*/


extern int printf(const char *, ...);
extern int scanf(const char *, ...);
int atoi(char *);

void main (int count, char * abhi []) {
    
    int sum = 0;
    
    for (int i = 1; i < count; i++) {
        sum += atoi(abhi[i]);
    }

    printf("\nSum of entered numbers = %d\n", sum);
    printf("\nAverage of entered numbers = %.2f\n", sum / 10.0);
    
    
    //alternate

        
}


/*  Alteratives :

    int array[10], sum = 0;
    printf("\nEnter 10 numbers : ");
    
    for (int i = 0; i < 10 ; i++) {
        scanf("%d", &array[i]);
    }
    
    for (int i = 0; i < 10; i++) {
        sum += array[i];
    }

    printf("\nSum of 10 entered numbers is %d\n", sum);
    printf("\nAverage of 10 entered numbers is %.2f\n", sum / 10.0);

*/
