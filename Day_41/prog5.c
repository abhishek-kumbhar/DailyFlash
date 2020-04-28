/*

Program 5: Write a Program calculates length of all three sides of a triangle if
		   user provides the three points that triangle bound in.

          {Note: Use Distance formula for computing the distances.}


*/


extern int printf (const char *, ...);
extern int scanf (const char *, ...);
double pow (double, double);
double sqrt (double);

int main (void) {
	
	float x1, x2, x3, y1, y2, y3, distXY, distYZ, distXZ;

    printf ("\nEnter X1 & Y1 : ");
    scanf ("%f%f", &x1, &y1);

    printf ("\nEnter X2 & Y2 : ");
    scanf ("%f%f", &x2, &y2);

	printf ("\nEnter X3 & Y3 : ");
    scanf ("%f%f", &x3, &y3);

	distXY = sqrt (pow ((y2 - y1), 2) + pow ((x2 - x1), 2));
	distYZ = sqrt (pow ((y3 - y2), 2) + pow ((x3 - x2), 2));
	distXZ = sqrt (pow ((y3 - y1), 2) + pow ((x3 - x1), 2));


	printf ("\nDistance d(XY) = %.2f\n", distXY);
	printf ("\nDistance d(YZ) = %.2f\n", distYZ);
	printf ("\nDistance d(XZ) = %.2f\n", distXZ);

	

}
