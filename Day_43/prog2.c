/*

Program 2: Write a Program to Print following Pattern.

                        4         
                      3 4 5       
                    2 3 4 5 6     
                  1 2 3 4 5 6 7   
                0 1 2 3 4 5 6 7 8 


*/


# include <stdio.h>

void printPattern (int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < (2 * rows - 1); j++) {
            if (i + j > rows - 2 && i + j < rows + 2 * i) {
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
