#include<stdio.h>
#include<conio.h>
void main()
{
    char nm[20], nm1[20];
    int i,j,l=0;
    printf("Enter a string\n");
    gets(nm);
    for(i=0;nm[i]!='\0';i++)
        l++;
    for(j=l-1,i=0;j>=0;j--,i++)
    {
        if(nm[j]=='\0')
            continue;
        nm1[i]=nm[j];
        
    }
    if(nm1==nm)
        printf("Palindrome");
    else
        printf("Not a palindrome");
}