//SIMPLE CALCULATOR USING SWITCH CASE..
#include<stdio.h>
int main(){
    char op;
    int x,y;
    printf("Choose the operator which you want to perform:\n");
    scanf("%c",&op);

    printf("Enter two numers:\n");
    scanf("%d%d",&x,&y);

    switch(op){
        case '+':printf("%d + %d = %d",x,y,x+y);
        break;
        case '-':printf("%d + %d = %d",x,y,x-y);
        break;
        case '*':printf("%d + %d = %d",x,y,x*y);
        break;
        case '/':printf("%d + %d = %d",x,y,x/y);
        break;
        default:printf("Enter a valid input");
        break;
    }
}