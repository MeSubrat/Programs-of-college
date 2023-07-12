//CALCULATE THE EXPRESSION 
#include<stdio.h>
int main(){
    int x;
    float y;
    printf("Enter x:");
    scanf("%d",&x);

    y=(x>2)?(2*x+5):(1.5*x+3);
    printf("y=%f",y);
}