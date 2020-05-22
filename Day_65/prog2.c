/*

Program 2: Write a Program that accepts a String from user then finds and
           prints the occurrence of each vowels in that string.


*/

# include <stdio.h>


struct vowels {
    int aCount;
    int eCount;
    int iCount;
    int oCount;
    int uCount;
};

int getLength (char str []) {
    int i = 0;
    while (str [i] != '\0') {
        i++;
    }
    return i;
}


struct vowels W;

int isVowel (char c) {
    switch (c) {
        case 'a' :
        case 'A' : W.aCount++;
            break;
        case 'e' :
        case 'E' : W.eCount++;
            break;
        case 'i' :
        case 'I' : W.iCount++;
            break;
        case 'o' :
        case 'O' : W.oCount++;
            break;
        case 'u' : 
        case 'U' : W.uCount++;
            break;
            return 1;
        default :
            return 0;
    }
}

void main (void) {
    char str [50];
    int cnt = 0;

    printf ("\nEnter the String : ");
    scanf ("%[^\n]%*c", str);
    
    int len = getLength (str);
    
    for (int i = 0; i < len; i++) {
        isVowel (str [i]);
    }

    printf ("\nThe Vowels occurence of vowels in the entered string is as below : \n");
    printf ("a = %d\ne = %d\ni = %d\no = %d\nu = %d\n", W.aCount, W.eCount, W.iCount, W.oCount, W.uCount);
     
}
