/*

Program 4: Write a Program to Print following Pattern.

                A0  B1  C2  D3  E4  F5  G6  H7  I8  
                    J2  K3  L4  M5  N6  O7  P8      
                        Q4  R5  S6  T7  U8          
                            V6  W7  X8              
                                Y8                  


*/

# include <stdio.h>

void printPattern (int rows) {
    char ch = 'A';
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < (2 * rows - 1); j++) {
            if (i + j >= 2 * i && i + j < rows * 2 - 1){
               printf ("%c%d  ", ch++, i + j);
            } else {
                printf ("    ");
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
