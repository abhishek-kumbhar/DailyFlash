/*

Program 2: Write a Program to calculate Simple Interest. Taking all essential
           terms to compute as input.


*/

extern int printf(const char *, ...);
extern int scanf(const char *, ...);

void main (void) {
    int principal, time;
    float rate;

    printf("\nEnter principal, Rate of Interest, Total time : ");
    scanf("%d %f %d", &principal, &rate, &time);

    printf("\nSimple interest = %.2f", ((principal * rate * time) / 100));

}

/*  Alternatives :

    	princlipal >= 0 && rate >= 0 && time >= 0 ? printf("SI : %f", principal * rate * time / 100) : printf("Enter valid input");


*/
