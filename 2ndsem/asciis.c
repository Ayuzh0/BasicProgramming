#include<stdio.h>
#include<conio.h>
void main()
{
    char nm[200];
    int i,l;
    printf("Enter a string\n");
    gets(nm);
    l=strlen(nm);
    printf("String input: %S\n",nm);
    printf("Num of character= %d\n",l);
    printf("Name and its ASCII equivalent\n");
    for(i=0;i<l;i++)
        printf("\n%c\t%d",nm[i],nm[i]);
}