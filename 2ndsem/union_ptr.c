#include<stdio.h>
#include<conio.h>
union sum
{
    int a,b,s;
};
void main()
{
    union sum s1,s2,s3;
    union sum *p1,*p2,*p3;
    p1=&s1;
    p2=&s2;
    p3=&s3;
    printf("Enter 2 numbers\n");
    scanf("%d%d",&p1->a,&p2->b);
    p3->s=p1->a+p2->b;
    printf("Sum= %d",p3->s);
}