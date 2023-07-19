//WRITE A C PROGRAM TO COMPARE TWO GIVEN STRINGS FOR EQUALITY WITHOUT USING LIBRARY FUNCTION..
#include<stdio.h>
int main()
{
    char str1[30];
    char str2[30];
    puts("Enter string1: ");
    gets(str1);
    puts("Enter string2: ");
    gets(str2);
    int i=0;
    while(str1[i]==str2[i] && str1[i]!='\0' && str2[i]!='\0')
    {
        i++;
    }
    if(str1[i]=='\0' && str2[i]=='\0')
    {
        printf("Two strings are equal");
    }
    else{
        printf("Two strings are not equal");
    }
}