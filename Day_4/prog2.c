/*

Program 2: Write a program that takes electricity unit charges as input and
           calculate total electricity bill according to the given condition:
                For first 50 units Rs. 0.50/unit
                For next 100 units Rs. 0.75/unit
                For next 100 units Rs. 1.20/unit
                For unit above 250 Rs. 1.50/unit.


*/

extern int scanf(const char *, ...);
extern int printf(const char *, ...);

void main (void) {
    
    int units;
    float total;
    
    printf("\nEnter No of Units : ");
    scanf("%d", &units);

    if (units < 51) {
        total = units * 0.5;
    } else if (units > 50 && units < 151) {
        total = ((units - 50) * 0.75) + 25;
    } else if (units > 150 && units < 251) {
        total = ((units - 150) * 1.2) + 100;
    } else if (units > 250) {
        total = ((units - 250) * 1.5) + 220;
    } 
    printf("\nTotal Electricity bill = %.2f \n", total);
}
