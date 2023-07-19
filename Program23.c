//PROGRAM FOR RUN TIME INITIALIZATION OF ARRAY
#include<stdio.h>
int main()
{
    int i,arr[100];
    for(i=0;i<100;i++)
    {
        scanf("%d",arr[i]);//RUN-TIME INITIALIZATION
    }
    //TO DISPLAY THE ARRAY ELEMENTS
    for(i=0;i<100;i++)
    {
        printf("%d",arr[i]);
    }
}