/*

Program 4: Write a Program to Print following Pattern.

                                              0                            
                                     1        1        2                   
                            3        5        8       13       21          
                  34       55       89      144      233      377      610 


*/


# include <stdio.h>

void printPattern (int rows) {
    int x = 0, y = 1, z;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < (2 * rows - 1); j++) {
            z = x + y;
            if (i + j > rows - 2 && i + j < rows + 2 * i) {
                printf ("%8d ", x);
                x = y;
                y = z;
            } else {
                printf ("         ");
            }   
        }
        printf ("\n");
    }

}


void main (void) {

    int rows;
    printf ("\nEnter number of Rows : ");
    scanf ("%d", &rows);

    printPattern (rows);

}
