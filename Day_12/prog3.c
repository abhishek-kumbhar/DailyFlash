/*

Program 3: Write a Program to calculate Velocity of particle in the space having
           Distance & Time Entered By User.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    float dist, time;
    
    printf ("\nEnter Distance & Time : ");
    scanf ("%f%f", &dist, &time);
    
    printf ("\nThe Velocity of particle roaming in space is %2.2f m/s", dist / time);

}
