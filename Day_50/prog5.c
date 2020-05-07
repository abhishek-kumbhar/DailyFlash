/*

Program 5: Write a Program to Print following Pattern.

                A A A A A A A A A 
                  B B B B B B B   
                    C C C C C     
                      D D D       
                        E         
      
     
*/

# include <stdio.h>

void printPattern (int rows) {
    char ch = 'A';
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < (2 * rows - 1); j++) {
            if (i + j >= 2 * i && i + j < rows * 2 - 1) {
                printf ("%c ", ch);
            } else {
                printf ("  ");
            } 
        }
        ch++;
        printf ("\n");
    }

}



void main (void) {

    int rows;
    printf ("\nEnter number of Rows : ");
    scanf ("%d", &rows);

    printPattern (rows);

}
