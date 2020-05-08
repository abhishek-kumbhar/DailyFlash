/*

Program 4: Write a Program to Print following Pattern.

                 1  2  3  4  5  6  7  8  9 
                    9  8  7  6  5  4  3    
                       3  4  5  6  7       
                          7  6  5          
                             5             

*/


# include <stdio.h>

void printPattern (int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < (2 * rows - 1); j++) {
            if (i + j >= 2 * i && i + j < rows * 2 - 1){
                if (i % 2 == 0) {
                    printf ("%2d ", j + 1);
                } else {
                    printf ("%2d ", 2 * rows - j);
                }
            } else {
                printf ("   ");
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
