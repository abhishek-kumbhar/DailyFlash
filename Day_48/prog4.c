/*

Program 4: Write a Program to Print following Pattern.

                0 1 2 3 4 5 6 7 8 
                  1 2 3 4 5 6 7   
                    2 3 4 5 6     
                      3 4 5       
                        4         


*/

# include <stdio.h>

void printPattern (int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < (2 * rows - 1); j++) {
            if (i + j >= 2 * i && i + j < rows * 2 - 1) {
                printf ("%d ", j);
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
