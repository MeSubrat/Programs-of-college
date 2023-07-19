//COPY OF STRING USING STRCPY()..
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
    puts("Enter String1: ");
    gets(s1);
    puts("Enter String2: ");
    gets(s2);
    strcpy(s1,s2);
    puts("The copied string is: ");
    puts(s1);
}