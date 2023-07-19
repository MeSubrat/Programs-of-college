//WRITE A C PROGRAM TO COMPARE TWO GIVEN STRINGS FOR EQUALITY WITH USING LIBRARY FUNCTION..
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="abcd";
    char str2[]="aBcd";
    int result;
    result=strcmp(str1,str2);
    printf("The comparison of two strings are : %d",result);
}