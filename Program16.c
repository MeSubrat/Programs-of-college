//WRITE A PROGRAM TO FIND THE SQUARES OF SUM OF GIVEN RANGE..
#include<stdio.h>
int main(){
    int input,num,sum; //Declaration
    printf("Enter the range for the sum from 0:\n");  //INPUT
    scanf("%d",&input);
    sum=0;
    while(num<=input){          //While loop
        sum=num*num+sum;
        num++;
    }
    printf("The sum is %d",sum);
}