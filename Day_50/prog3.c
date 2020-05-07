/*

Program 3: Write a Program to Print following Pattern.

                A B C D E F G H I 
                  A B C D E F G   
                    A B C D E     
                      A B C       
                        A         
     

*/

# include <stdio.h>

void printPattern (int rows) {
    char ch;
    for (int i = 0; i < rows; i++) {
        ch = 'A';
        for (int j = 0; j < (2 * rows - 1); j++) {
            if (i + j >= 2 * i && i + j < rows * 2 - 1) {
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
