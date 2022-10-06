#include<stdio.h>
#include<stdlib.h>//for system("cls");
#include<conio.h>
void main()
{
    char a=' ';
    int n,i;
    system("cls");//same as clrscr
    printf("Enter the number of characters:\n");
    scanf("%d",&n);
    printf("Enter the characters:\n");
    for(i=0;i<=n*2;i++)
    {
        scanf("%c",&a);
        if(a!='\n')
            printf("ASCII value of  %c= %d\n",a,(int)a);
    }  
}