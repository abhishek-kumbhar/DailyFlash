/*

Program 2: Write a Program that accepts Two integers from user and prints the
           series of factorial of all numbers between those two inputs.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);


int fact (int x) {
    if (x == 0) {
        return 1;
    }
    return (x * fact(x - 1));
}

void printFactorials (int x, int y) {
    for (int i = x; i < y + 1; i++) {
        printf ("\nFactorial of %2d = %8d", i, fact(i));
    }
}

void main (void) {
    
    int x, y;
    
    printf ("\nEnter range : ");
    scanf ("%d%d", &x, &y);
    
    printFactorials(x, y);

}
