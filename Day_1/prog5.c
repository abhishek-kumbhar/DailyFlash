/*
 
Program 5: Write a Program to Find Maximum between three numbers 

*/

extern int scanf(const char *, ...);
extern int printf(const char *, ...);

void main (void) {
    int x, y, z;
    
    printf("\nEnter 3 numbers : ");
    scanf("%d%d%d", &x, &y, &z);

    if (x > y) {
        if (x > z) {
            printf("\n%d is greater among %d, %d & %d", x, x, y, z);
        } else {
            printf("\n%d is greater among %d, %d & %d", z, x, y, z);
        }
    } else {
        if (y > z) { 
            printf("\n%d is greater among %d, %d & %d", y, x, y, z);
        } else {
            printf("\n%d is greater among %d, %d & %d", z, x, y, z);
        }
    } 
}

/* Alternatives
 
1 -> (x > y && x > z) ? printf("\n%d is greater.\n", x) : ((y > z) ? printf("\n%d is greater.\n", y) : printf("\n%d is greater.\n", z));

2 -> (x > y && x > z) ? printf("\n%d is greater.\n", x) : ((y > x && y > z) ? printf("\n%d is greater.\n", y) : (z > x && z > y) ? printf("\n%d is greater.\n", z) : printf(" "));

*/
