/*

Program 5: Write a Program calculates Distance between two points of a line,
		   if user provides Point A & Point B of that line.

		   {Note: Distance of a line is computed as d(line) =√(x2-x1) 2 + (y2-y1) 2 }


*/


extern int printf (const char *, ...);
extern int scanf (const char *, ...);
double pow (double, double);
double sqrt (double);

int main (void) {
	
	float x1, x2, y1, y2, dist;

    printf ("\nEnter X1 & Y1 : ");
    scanf ("%f%f", &x1, &y1);

    printf ("\nEnter X2 & Y2 : ");
    scanf ("%f%f", &x2, &y2);

	dist = sqrt (pow ((y2 - y1), 2) + pow ((x2 - x1), 2));

	printf ("\nDistance d(XY) = %.1f", dist);

}
