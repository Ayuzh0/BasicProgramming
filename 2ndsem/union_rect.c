#include<stdio.h>
#include<conio.h>
union rectangle
{
    int l,b,a,p;
};
void main()
{
    union rectangle u1,u2,u3,u4;
    printf("Enter length and breadth\n");
    scanf("%d%d",&u1.l,&u2.b);
    u3.a=u1.l*u2.b;
    u4.p=2*(u1.l+u2.b);
    printf("Area= %d\n",u3.a);
    printf("Perimeter= %d\n",u4.p);
}