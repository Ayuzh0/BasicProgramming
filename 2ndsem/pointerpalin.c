#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a,p1,r=0;
    int *p,*q,*s,*t;
    printf("Enter any number\n");
    scanf("%d",&n);
    p=&n;
    q=&a;
    s=&p1;
    t=&r;
    *s=*p;
    while(*p>0)
    {
        *q=*p%10;
        *t=*t*10+*q;
        *p/=10;
    }
    if(*t==*s)
        printf("Palindrome\n");
    else
        printf("Not a palindrome");
}