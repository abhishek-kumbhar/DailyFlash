/*

Program 3: Write a Program to take input length and breadth of rectangle and
           calculate its area.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int l, b;
    
    printf ("\nEnter length & breadth of a Rectangle : ");
    scanf ("%d%d", &l, &b);

    printf ("\nArea of a Rectangle : %d", l * b);

}
