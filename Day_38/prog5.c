/*

Program 5: Write a Program calculates mid-point of a line made up of two
           points taken from user.

           {Note: mid (X, Y) = { (( x1 + x2) / 2), ((y1 + y2) / 2) } }


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {

    int x1, x2, y1, y2;
    float X, Y;

    printf ("\nEnter X1 & Y1 : ");
    scanf ("%d%d", &x1, &y1);

    printf ("\nEnter X2 & Y2 : ");
    scanf ("%d%d", &x2, &y2);

    X = (float) (x1 + x2) / 2;
    Y = (float) (y1 + y2) / 2;

    printf ("\nMid-point of line XY = (%.1f, %.1f)\n", X, Y);


}
