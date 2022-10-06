#include<stdio.h>
#include<conio.h>
void main()
{
    int a=5;
    int *p;
    int **pp;
    p=&a;
    pp=&p;
    printf("Value of a= %d\n",a);
    printf("Value of a= %d\n",*p);
    printf("Value of a= %d\n",**pp);
    printf("Address of a= %u\n",&a);
    printf("Address of a= %u\n",p);
    printf("Address of a= %u\n",*pp);
}