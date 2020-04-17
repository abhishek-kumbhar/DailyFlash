/*

Program 5: Write a Program that takes a number as input from user and prints
           only those digits from that number, which are prime in nature.


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

int isPrime (int x) {
    if (x == 2 || x == 3 || x == 5 || x == 7) {
        return x;
    } else {
        return -1;
    }

}

void main (void) {
   
   int x, y;
   
   printf ("\nEnter a number : ");
   scanf ("%d", &x);
   
   y = x;
   
   printf ("\nPrime numbers in %d are : ", y);
   
   while (x != 0) {
       int k = isPrime (x % 10); 
       k != -1 ? printf ("%d ", k) : 1;
       x /= 10;
   }

}
