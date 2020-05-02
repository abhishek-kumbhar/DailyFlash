/*

Program 5: Write a Program that computes perimeter of a triangle if user
           enters the vertices of all three points of that triangle.

           {Steps: 1. Calculate distances of all three sides of triangle using distance formula, say a, b, & c are those distances.
                   2. Calculate Perimeter of triangle using Hero’s Formula i.e. Perimeter P of triangle is : P = a + b + c
           }


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);
double sqrt (double);


float getDistance (int x1, int x2, int y1, int y2) {
    return sqrt (((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
}


void main (void) {

    int x1, x2, x3, y1, y2, y3;
    float XY, YZ, XZ, perimeter;

    printf ("\nEnter X1 & Y1 : ");
    scanf ("%d%d", &x1, &y1);

    printf ("\nEnter X2 & Y2 : ");
    scanf ("%d%d", &x2, &y2);

    printf ("\nEnter X3 & Y3 : ");
    scanf ("%d%d", &x3, &y3);

    XY = getDistance (x1, x2, y1, y2);
    YZ = getDistance (x2, x3, y2, y3);
    XZ = getDistance (x1, x3, y1, y3);

    perimeter = XY + YZ +XZ;

    printf ("\nLength XY = %.1f", XY);
    printf ("\nLength YZ = %.1f", YZ);
    printf ("\nLength XZ = %.1f", XZ);

    printf ("\nPerimeter of Triangle : %.1f\n", XY + YZ + XZ);


}
