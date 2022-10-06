#include<stdio.h>
#include<conio.h>
void main()
{
    int n=5;
    int *p;
    p=&n;
    printf("Address of p= %u\n",p);
    p-=3;
    printf("After increment of Address of P =%u\n",p);
}