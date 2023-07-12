//SWAPPING OF THREE NUMBERS WITHOUT USING A THIRD VARIABLE..
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter two numbers:\n");
    scanf("%d%d",&x,&y);

    printf("Before swap %d  %d\n",x,y);

    x=x+y;
    y=x-y;
    x=x-y;

    printf("After swap %d  %d",x,y);
}