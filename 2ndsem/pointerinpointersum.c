#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,s;
    int *p,*q;
    int **pp, **qq;
    printf("Enter a and b\n");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    pp=&p;
    qq=&q;
    s=(**pp)+(**qq);
    printf("sum=%d\n",s);
}