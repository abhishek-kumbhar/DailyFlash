/*

Program 1: Write a Program to take all three sides of a triangle from user and
           check whether the triangle satisfies the Pythagorean Theorem.


*/

extern int printf(const char *, ...);
extern int scanf(const char *, ...);

void main (void) {
    int x, y, z;
    
    printf("\nEnter 3 sides of a triangle : ");
    scanf("%d %d %d", &x, &y, &z);
    
    printf("\nSide 1 = %d \nSide 2 = %d \nHypotenuse = %d\n", x, y, z);

    ((x * x + y * y) == (z * z)) ?  printf("\nTriangle satisfies Pythagorean Theorem. ") : 
        printf("\nTriangle NOT satisfies Pythagorean Theorem. ");
       
}

/* Alternative :

    if(x > 0 && y > 0 && z > 0){
		if(x * x + y * y == z * z)
			printf("Triangle satisfies Pythagoras Theorem\n");
		else
			printf("Triangle does not satisfy Pythagoras Theorem\n");
	}
	else{
		printf("Sides are not allowed\n");
	}


*/
