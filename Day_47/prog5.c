/*

Program 5: Write a Program to Print following Pattern.

                        *         
                      * * *       
                    * + * - *     
                  * + + * - - *   
                * * * * * * * * * 


*/


# include <stdio.h>


#define YEL "\e[1;38;5;228m"
#define BLU "\e[1;38;5;027m"
#define RED "\e[1;38;5;088m"

void printPattern (int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < (2 * rows - 1); j++) {
            if (i + j > rows - 2 && i + j < rows + 2 * i){
                if (j == rows - 1 || i + j == rows - 1 || j - i == rows - 1 || i == rows - 1) {
                    printf (YEL"* ");
                } else {
                    if (j < rows - 1) {
                        printf (RED"+ ");
                    } else {
                        printf (BLU"- ");
                    }
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
