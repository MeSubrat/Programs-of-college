//WRITE A C PROGRAM TO CALCULATE THE POWER OF A GIVEN BASE/NUMBER...
#include<stdio.h>
int main(){
    int x,y=1,n=1,count=1;
    printf("Enter the power and base:\n");
    scanf("%d%d",&n,&x);
    while(count<=n){
        y=y*x;
        count++;
    }
    printf("%d to the power %d = %d",x,n,y);
}