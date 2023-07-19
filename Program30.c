//WRITE A C PROGRAM TO ADD TWO GIVEN MATRICES AND DISPLAY THE SUM OF MATRICES..
#include<stdio.h>
int main(){
    int a[10][10],b[10][10],i,j,row,col;
    int c[10][10]={{0,0},{0,0}};
    printf("Enter the number of rows &columns: ");
    scanf("%d%d",&row,&col);
    printf("Enter the elements to the second array");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements to the second array");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            scanf("%d",&b[i][j]);
        }
    //ADDITION OF TWO MATRIX
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++){
            c[i][j]=c[i][j]+a[i][j]+b[i][j];
        }
    }
    printf("The sum of two matrix is : \n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}