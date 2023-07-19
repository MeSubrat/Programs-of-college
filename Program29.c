//WRITE A C PROGRAM TO INPUT 3X4 2D ARRAY AND DISPLAY IT IN MATRIX FORMAT..
#include<stdio.h>
int main()
{
    int mat[3][4];
    printf("Enter the elements to the array\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("The elements in matrix format is: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
}