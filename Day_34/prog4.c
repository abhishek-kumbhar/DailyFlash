/*

Program 4: Write a Program to Print following Pattern.

            H E L L O   W O R L D 
              E L L O   W O R L D 
                L L O   W O R L D 
                  L O   W O R L D 
                    O   W O R L D 
                        W O R L D 
                        W O R L D 
                          O R L D 
                            R L D 
                              L D 
                                D 


*/


extern int printf (const char *, ...);
extern int scanf (const char *, ...);

int getLength (char str []) {
    int i = 0;
    while (str [i] != '\0') {
        i++;
    }
    return i;
}

void printPattern (char str []) {
    int x = getLength (str);
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            x - i + j > x - 1 ? printf ("%c ", str [j]) : printf ("  ");
        }
        printf ("\n");
    }

}


void main (void) {

    char str [50];

    printf ("\nEnter the String : ");
    scanf ("%[^\n]%*c", str);

    printPattern (str);

}
