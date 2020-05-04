/*

Program 3: Write a Program to Print following Pattern.

                        +         
                      +   +       
                    +       +     
                  +           +   
                + + + + + + + + +


*/


# include <stdio.h>


void printPattern (int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < (2 * rows - 1); j++) {
            if (i + j > rows - 2 && i + j < rows + 2 * i){
                if (i + j == rows - 1 || j - i == rows - 1 || i == rows - 1) {
                    printf ("+ ");
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
