/*

Program 5: Write a Program to Print following Pattern.

                        A         
                      B A B       
                    C B A B C     
                  D C B A B C D   
                E D C B A B C D E 


*/


# include <stdio.h>
# include <math.h>

void printPattern (int rows) {
    char ch;
    for (int i = 0; i < rows; i++) {
        ch = 'B' + i;
        for (int j = 0; j < (2 * rows - 1); j++) {
            if (i + j > rows - 2 && i + j < rows + 2 * i) {
                if (j < rows) {
                     printf ("%c ", --ch);
                } else {
                     printf ("%c ", ++ch);
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
