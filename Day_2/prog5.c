/*

Program 5: Write a Program that takes angles of a triangle from user and print
           whether that triangle is valid or not.
           {Note: Addition of angles of triangle has to be 180 in order to consider it as a
            valid one}


*/


extern int printf(const char *, ...);
extern int scanf(const char *, ...);

void main (void) {
    
    int x, y, z;
    
    printf("\nEnter Angles of a Triangle : ");
    scanf("%d%d%d", &x, &y, &z);

    ((x + y + z) == 180) ? (printf("\nThe triangle with angles %d, %d & %d is a Valid Triangle.\n", x, y, z)) : printf("\nThe triangle with angles %d, %d & %d is NOT Valid Triangle.\n", x, y, z); 

}

/*

Alternatives

    x >= 0 && y >= 0 && z >= 0 && x + y + z == 180 ? printf("\nValid") : printf("\nInvalid");


    if(x + y + z == 180){
		printf("Valid triangle");
	} else { 
		printf("not Valid triangle");
	}
	

*/
