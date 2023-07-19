//WRITE A C PROGRAM TO DISPLAY A STRING USING PRINTF()..
#include<stdio.h>
int main()
{
    char name[]="Bhubaneswar";
    int i=0;while(name[i]!='\0'){
        printf("%c",name[i]);
        i++;
    }
}