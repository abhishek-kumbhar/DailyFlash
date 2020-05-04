/*

Program 4: Write a Program to Print following Pattern.

                             0             
                          3  4  5          
                       4  6  8 10 12       
                    3  6  9 12 15 18 21    
                 0  4  8 12 16 20 24 28 32 


*/


# include <stdio.h>


void printPattern (int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < (2 * rows - 1); j++) {
            if (i + j > rows - 2 && i + j < rows + 2 * i){
                printf ("%2d ", i * j);
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
