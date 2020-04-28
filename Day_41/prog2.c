/*

Program 2: Write a Program that accepts a number from user and prints the
           values at following places from that number. 
         
           {Value at one’s place, ten’s place, hundreds’ place & thousand’s place if the values exists}


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {
    
    int x, cnt = 0;
    
    printf ("\nEnter a number : ");
    scanf ("%d", &x);

    const char places [][20] = {
        "One's", 
        "Ten's",
        "Hundred's",
        "Thousand's",
        "Ten Thousand's",
        "Hundred Thousand's",
        "Million's"
    };

    while (x != 0) {
        printf ("Value at %s place : %d\n", places [cnt++], x % 10);
        x /= 10;
    }

}
