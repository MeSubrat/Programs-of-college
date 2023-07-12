//TESTING OF DO-WHILE LOOP..
#include<stdio.h>
int main(){
    int num;

    do{
        printf("Enter a number:\n");
        scanf("%d",&num);
    }while(num>10);

    printf("The program is terminated when the number is %d",num);
}