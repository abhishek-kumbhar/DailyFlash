/*

Program 5: Write a Program to take marks of five subjects Physics, Chemistry,
           Biology, Mathematics and Computer. Calculate percentage and grade
           according to following:
            Percentage >= 90% : Grade A
            Percentage >= 80% : Grade B
            Percentage >= 70% : Grade C
            Percentage >= 60% : Grade D
            Percentage >= 40% : Grade E 
            Percentage < 40% : Grade F


*/

extern int printf(const char *, ...);
extern int scanf(const char *, ...);

void main (void) {
    int sub0, sub1, sub2, sub3, sub4;
    
    printf("\nEnter marks of 5 subjects : ");
    scanf("%d %d %d %d %d", &sub0, &sub1, &sub2, &sub3, &sub4);

    int total = (sub0 + sub1 + sub2 + sub3 + sub4);
    float per = ((sub0 + sub1 + sub2 + sub3 + sub4) / 500.0 * 100);

    if (per >= 90) {
        printf("Percentage = %.2f Grade = 'A'", per);
    } else if (per >= 80) {
        printf("Percentage = %.2f Grade = 'B'", per);
    } else if (per >= 70) {
        printf("Percentage = %.2f Grade = 'C'", per);
    } else if (per >= 60) {
        printf("Percentage = %.2f Grade = 'D'", per);
    } else if (per >= 40) {
        printf("Percentage = %.2f Grade = 'E'", per);
    } else if (per < 40) {
        printf("Percentage = %.2f Grade = 'F'", per);
    }
}
