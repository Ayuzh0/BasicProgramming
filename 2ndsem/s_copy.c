#include<stdio.h>
#include<conio.h>
void main()
{
    char nm[20],nm1[20];
    int i,l=0;
    printf("Enter a string");
    gets(nm);
    for(i=0;nm[i]!='\0';i++)
        l++;
    for(i=0;i<l;i++)
        nm1[i]=nm[i];
    printf("Copy= %s",nm1);
}