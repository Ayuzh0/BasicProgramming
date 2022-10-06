#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
char str()
{
    char nm[99];
    printf("Enter a string\n");
    gets(nm);
    return nm;
}
void main()
{
    char nm[99],nm1[99];
    int ch;
    printf("Enter 1 for string length\n");
    printf("Enter 2 for reverse of string\n");
    printf("Enter 3 for lowercase\n");
    printf("Enter 4 for uppercase\n");
    printf("Enter 5 for copy\n");
    printf("Enter 6 for concatenation\n");
    printf("Enter 7 for comaring strings\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: printf("length of the string input is %d ",strlen(str()));
    }
}