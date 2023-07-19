//PROGRAM TO IMPLEMENT LINEAR SEARCH FOR SEARCHING AN ELEMENT IN AN EXISTING ARRAY AND DISPLAY THE POSITION
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,key,arr[30];
    printf("Enter the size of array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the element at %d position:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            printf("\nThe element is found at %d",i+1);
            exit(0);
        }
    }
    printf("\nThe element is not found");
}