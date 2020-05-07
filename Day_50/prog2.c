/*

Program 2: Write a Program to print following array.

Arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};


*/

extern int printf (const char *, ...);
extern int scanf (const char *, ...);

void main (void) {

    int arr [] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf ("\nArray is : ");

    for (int i = 0; i < 9; i++) {
        printf ("%d ", arr [i]);
    }

}   
