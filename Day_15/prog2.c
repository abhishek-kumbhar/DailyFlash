/*

Program 2: Write a Program that calculates Kinetic Energy of object with given
           Mass & Velocity.
           {Note: K.E. = 1⁄2 * m * v * v }


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {

    int mass, velo;
    
    printf("\nEnter Mass & Velocity : ");
    scanf("%d%d", &mass, &velo);

    printf("\nKinetic Energy =  %.2f", 0.5 * mass * velo * velo);

}

