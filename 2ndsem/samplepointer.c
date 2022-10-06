#include<stdio.h>
#include<conio.h>
void main()
{
    int a=5,b=6,s;
    int *p,*q;
    p=&a,q=&b;
    s=*p+*q;
    printf("Value of a =%d\n",a);
    printf("Value of a =%d\n",p);
    printf("Value of a =%u\n",&a);
    printf("Value of b =%u\n",q);
    printf("%u",*p+*q);
}