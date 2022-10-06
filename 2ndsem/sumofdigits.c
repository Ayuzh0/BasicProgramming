#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int n,temp,d,s;
    system("cls");
    printf("Enter a number\n");
    scanf("%d",&n);
    s=0;
    temp=n;
    while(temp!=0)
    {
        d=temp%10;
        s+=d;
        temp/=10;
    }
    printf("Sum of all digits of %d = %d", n,s);
    
}