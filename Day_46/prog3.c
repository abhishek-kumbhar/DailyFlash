/*

Program 3: Write a Program to Print following Pattern.

                        1         
                      1 2 1       
                    1 2 3 2 1     
                  1 2 3 4 3 2 1   
                1 2 3 4 5 4 3 2 1 
                

*/


# include <stdio.h>
# include <math.h>

void printPattern (int rows) {
    int k;
    for (int i = 0; i < rows; i++) {
        k = 0;
        for (int j = 0; j < (2 * rows - 1); j++) {
            if (i + j > rows - 2 && i + j < rows + 2 * i) {
                if (j < rows) {
                     printf ("%d ", ++k);
                } else {
                     printf ("%d ", --k);
                }
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
