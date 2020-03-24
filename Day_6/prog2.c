/*

Program 2 : Write a Program that accepts an integer from user and print Sum of
            all number up to entered number .


*/

extern int printf(const char *, ...);
extern int scanf(const char *, ...);

void main (void) {
    
    int x, sum = 0;
    
    printf("\nEnter a number : ");
    scanf("%d", &x);

    for (int i = 1; i < x + 1; i++) {
        sum += i;
    }

    printf("\nThe sum of numbers upto %d is : %d\n", x, sum);
}


/* Alternatives :

    sum = x * (x - 1) / 2; 

*/
