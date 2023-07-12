//WRITE A PROGRAM TO CALCULATE FACTORIAL OF NUMBERS..
#include<stdio.h>
int main(){
    int count=1,num;
    long int fact=1;

    printf("Enter a number for which you want the factorial:\n");
    scanf("%d",&num);

    do{
        fact=fact*count;
        count++;

    }while(count<=num);
    printf("The factorial is %ld",fact);
}