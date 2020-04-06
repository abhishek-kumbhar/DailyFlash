/*

Program 3: Write a Program to Convert enter distance in feet to centimetres.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x;
    
    printf("\nEnter the Distance in feet : ");
    scanf("%d", &x);

    printf("\nEquivalent distance for %d ft in cm is %d cm ", x, x * 30);

}
