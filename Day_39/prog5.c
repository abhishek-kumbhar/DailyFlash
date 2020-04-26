/*

Program 5: Write a Program calculates slope of a line if user provides the Two
		   Points A & B of that line.

           {Note: Slope of a line is computed as m = ((y2-y1)/(x2-x1)) }


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

int main (void) {

	float x1, x2, y1, y2, slope;

    printf ("\nEnter X1 & Y1 : ");
    scanf ("%f%f", &x1, &y1);

    printf ("\nEnter X2 & Y2 : ");
    scanf ("%f%f", &x2, &y2);

	slope = ((y2 - y1)/ (x2 - x1));

    printf ("\nSlope of Line XY = %.1f\n", slope);


}
