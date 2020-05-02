/*

Program 2: Write a Program to Print following Pattern.

                        1         
                      2 3 2       
                    3 4 5 4 3     
                  4 5 6 7 6 5 4   
                5 6 7 8 9 8 7 6 5 


*/


# include <stdio.h>

void printPattern (int rows) {
    for (int i = 0; i < rows; i++) {
        int k = i;
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
