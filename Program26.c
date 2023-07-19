//WRITE A PROGRAM TO SORT THE ELEMENTS OF THE ARRAY IN ASCENDING ORDER
#include<stdio.h>
int main()
{
    int n,temp,i,j,arr[n];
    printf("Enter the size of array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the element at %d position:",i+1);
        scanf("%d",&arr[i]);
    }
    //SORTING
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    //DISPLAYING THE ELEMENTS AFTER SORTING
    printf("\tTHE SORTED ARRAY AFTER SORTNING IN ASCENDING ORDER\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

}