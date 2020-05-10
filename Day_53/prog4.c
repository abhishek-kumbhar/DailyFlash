/*

Program 4: Write a Program to Print following Pattern.

                 0  1  2  3  4  5  6  7  8 
                    2  3  4  5  6  7  8    
                       6  7  8  9 10       
                         12 13 14          
                            20             

*/

# include <stdio.h>


void printPattern (int rows) {
    for (int i = 0; i < rows; i++) {
        int k = i * (i + 1);
        for (int j = 0; j < (2 * rows - 1); j++) {
            if (i + j >= 2 * i && i + j < rows * 2 - 1){
                printf ("%2d ", k++);
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
