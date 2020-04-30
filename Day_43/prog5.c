/*

Program 5: Write a Program calculates Distance between two points of a line,
		   if user provides Point A & Point B of that line.
           
		   {Note: Distance of a line is computed as d(line) =√(x2-x1) 2 + (y2-y1) 2 }


*/

# include <stdio.h>
# include <math.h>

void main (void) {
	
	float x1, x2, y1, y2;
	
	printf ("\nEnter X1 & Y1 : ");
	scanf ("%f%f", &x1, &y1);
	
	printf ("\nEnter X2 & Y2 : ");
	scanf ("%f%f", &x2, &y2);

	printf ("\nDistance of Line XY = %.2f", sqrt ((pow ((x2 - x1), 2) + pow ((y2 - y1), 2))));

}
