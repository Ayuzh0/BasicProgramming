#include<stdio.h>
#include<conio.h>
void main()
{
    char nm[20],nm1[20],m[40]={'\0'};
    int i,l1=0,l2=0;
    printf("Enter a string\n");
    gets(nm);
    printf("Enter another string\n");
    gets(nm1);
    for(i=0;nm[i]!='\0';i++)
        l1++;
    for(i=0;nm1[i]!='\0';i++)
        l2++;
    for(i=0;i<l1;i++)
        m[i]=nm[i];
    for(i=l1;i<l1+l2;i++)
        m[i]=nm1[i-l1];
    printf("merged= %s",m);
}