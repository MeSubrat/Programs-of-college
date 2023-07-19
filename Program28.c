//PROGRAM TO FIND THE LARGEST AND SMALLEST ELEMENT IN AN INTEGER ARRAY
#include<stdio.h>
int main()
{
    int n,arr[n];
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);//READING ARRAY ELEMENTS
    }
    //FINDING THE LARGEST ELEMENT
    int largest=arr[0];
    for(int i=1;i<n;i++)
    {
        //largest=arr[0];
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    printf("The largest element is %d",largest);
    int smallest=arr[0];
    //FINDING THE SMALLEST ELEMENT 
    for(int i=1;i<n;i++)
    {
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }
    printf("\nThe smallest element is %d",smallest);
}