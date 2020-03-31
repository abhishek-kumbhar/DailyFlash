/*

Program 3: Write a Program to Implement Ohms Law.
           {Note: V = I*R, where, v is voltage, I is current & R is resistance}


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int current, resistance;
    
    printf("\nEnter current & resistance : ");
    scanf("%d%d", &current, &resistance);

    printf("By Ohm's Law V = %d", current * resistance);

}
