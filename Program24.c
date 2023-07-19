//WRITE A C PROGRAM TO READ 10 REAL VALUES AND COMPUTE THE SUM OF THEIR SQUARES AND DISPLAY THE ARRAY
#include<stdio.h>
int main()
{
    float x[10],sumsq=0;
    printf("Enter the float array: ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    for(int j=0;j<10;j++)
    {
        printf("\nx[%d]=%f",j+1,x[j]);
    }
    for(int i=0;i<10;i++)
    {
        sumsq=sumsq+(x[i]*x[i]);
    }
    printf("\n");
    printf("The sum of square of is :%f",sumsq);
    return 0;
}