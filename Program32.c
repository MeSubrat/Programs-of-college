//WRITE A C PROGRAM TO INPUT A STRING USING GET() AND TO DISPLAY USING PUTS()
#include<stdio.h>
int main()
{
    char name[80];
    puts("Ente your name:");
    gets(name);
    puts("The entered name is : ");
    puts(name);
}