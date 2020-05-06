/*

Program 3: Write a Program to Print following Pattern.        

                *   *   *   *   * 
                  *   *   *   *   
                    *   *   *     
                      *   *       
                        *         


*/

# include <stdio.h>

void printPattern (int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < (2 * rows - 1); j++) {
            if (i + j >= 2 * i && i + j < rows * 2 - 1) {
                if ((i + j) % 2 == 0) {
                    printf ("* ");
                } else {
                    printf ("  ");
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
