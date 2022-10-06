#include<stdio.h>
#include<conio.h>
void main()
{
    char nm[20],*ptr;
    int i,l=0;
    ptr=nm;
    printf("Enter a string\n");
    gets(ptr);
    for(i=0;*(ptr+i)!='\0';i++)
        l++;
    printf("Total length=%d\n",l);
}