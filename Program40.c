//COPY OF STRING WITHOUT USING STRCPY()...
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
    puts("Enter string1: ");
    gets(s1);
    puts("Enter string2: ");
    gets(s2);
    int i=0;
    while(s2[i]!='\0')
    {
        s1[i]=s2[i];
        i++;
    }
    s1[i]='\0';
    puts("The copied string is: ");
    puts(s1);
}