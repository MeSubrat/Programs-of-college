// WRITE A C PROGRAM TO FIND THE DAY ACCORDING TO THE NUMBER GIVEN BY THE USER FROM 0 TO 7..
#include<stdio.h>
int main(){
    char days;
    printf("Enter the number for the corresponding day:\n");
    scanf("%c",&days);

    switch(days){
        case '1':printf("Sunday");
        break;
        case '2':printf("Monday");
        break;
        case '3':printf("Tuesday");
        break;
        case '4':printf("Wednusday");
        break;
        case '5':printf("Thursday");
        break;
        case '6':printf("Friday");
        break;
        case '7':printf("Saturday");
        break;
        default:printf("Enter a valid input\n");
        break;
    }
}