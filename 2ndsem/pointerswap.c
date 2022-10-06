#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    int *p,*q,*r;
    printf("Enter a and b\n");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    r=&c;
    *r=*p;
    *p=*q;
    *q=*r;
    printf("First no.%d\n",*p);
    printf("Second no. %d\n",*q);
    p=&a;
    q=&b;
    *p=*p+*q;
    printf("Swapping again to bring the previous result\n");
    *q=*p-*q;
    *p=*p-*q;
    printf("First no.%d\n",*p);
    printf("Second no. %d\n",*q);
}
