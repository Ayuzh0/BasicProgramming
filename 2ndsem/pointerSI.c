#include<stdio.h>
#include<conio.h>
void main()
{
    int p,r,t,si,*a,*b,*c,*d;
    printf("Enter the principal, rate and time one by one\n");
    scanf("%d%d%d",&p,&r,&t);
    a=&p;
    b=&r;
    c=&r;
    d=&si;
    *d=(*a**b**c)/100;
    printf("Simple Interest=%d",*d);
}