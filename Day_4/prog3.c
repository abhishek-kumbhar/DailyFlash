/*

Program 3: Ask user to enter age, sex ( M or F ), marital status ( Y or N ) and
           then using following rules print their place of service.
                if employee is female, then she will work only in urban areas.
                if employee is a male and age is in between 20 to 40 then he may work in anywhere
                if employee is male and age is in between 40 t0 60 then he will work inurban areas only.
                And any other input of age should print "ERROR".

*/


#include <stdio.h>

void main (void) {
    int age;
    char sex, ms;

    printf("\nEnter Age : ");
    scanf("%d", &age);
    
    printf("\nEnter Sex (M / F): ");
    scanf(" %c", &sex);
    
    printf("\nMaritial Status (Y / N) : ");
    scanf(" %c", &ms);
    
    if (sex == 'F') {
        printf("\nYou can Work only in Urban areas.\n");
    } else if (sex == 'M' && (age > 19 && age < 41 )) {
        printf("\nYou can Work Anywhere.\n");
    } else if (sex == 'M' && (age > 39 && age < 61)) {
        printf("\nYou can Work in Urban areas ONLY.\n");
    } else if (sex == 'M' && (age < 20 || age > 60)){
        printf("\nERROR.\n");
    }
    

}
