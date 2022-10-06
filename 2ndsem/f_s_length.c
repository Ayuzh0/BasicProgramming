#include<stdio.h>
#include<conio.h>
void main()
{
    void count(char nm[]);
    char nm[20];
    printf("Enter any string\n");
    gets(nm);
    count(nm);
}
void count(char nm[])
{
    int i,l=0;
    for(i=0;nm[i]!='\0';i++)
        l++;
    printf("Total length= %d\n",l);
}