/*

Program 3: Write a Program to print Cubes and Squares of all Odd numbers
           ranges between given input number.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x;
    
    printf("\nEnter a number : ");
    scanf("%d", &x);

    for (int i = 1; i < x + 1; i++) {
        (i % 2 == 1) ? printf("\nCube of %2d : %4d and Square of %2d : %3d", i, i * i * i, i, i * i) : 1;
    }

}
