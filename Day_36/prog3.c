/*

Program 3: Write a Program to print following Pattern of series white-black,
           black-white, white-black, black-white


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {

    int x;

    printf ("\nEnter no of Rows : ");
    scanf ("%d", &x);

    while (x != 0) {
        printf ("white-black, black-white, white-black, black-white\n");
        x--;
    }

}
