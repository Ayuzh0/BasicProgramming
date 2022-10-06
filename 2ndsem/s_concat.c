#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char nm[78],nm1[89];
    int i;
    printf("Enter a string\n");
    gets(nm);
    printf("Enter a string\n");
    gets(nm1);
    i=str(nm,nm1);
    printf("Answer= %d\n",i);
}