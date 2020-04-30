/*

Program 4: Write a Program to Print following Pattern.

                        A         
                      A B C       
                    A B C D E     
                  A B C D E F G   
                A B C D E F G H I 


*/


# include <stdio.h>

void printPattern (int rows) {
    for (int i = 0; i < rows; i++) {
        char ch = 'A';
        for (int j = 0; j < (2 * rows - 1); j++) {
            if (i + j > rows - 2 && i + j < rows + 2 * i) {
                printf ("%c ", ch++);
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
