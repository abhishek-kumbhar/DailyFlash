/*

Program 3: Write a Program to Print following Pattern.

                0 0 0 0 0 0 0 0 0 
                  1 1 1 1 1 1 1   
                    2 2 2 2 2     
                      3 3 3       
                        4         


*/

# include <stdio.h>

void printPattern (int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < (2 * rows - 1); j++) {
            if (i + j >= 2 * i && i + j < rows * 2 - 1) {
                printf ("%d ", i);
            } else {
                printf ("  ");
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
