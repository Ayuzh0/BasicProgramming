#include<stdio.h>
#include<conio.h>
void main()
{
	void area(int *,int *);
	void perimeter(int *,int *);
    int l,b;

	printf("Enter l,b\n");
    scanf("%d%d",&l,&b);
    area(&l,&b);
    perimeter(&l,&b);
    getch();
}
void area(int *l,int *b)
{
    int *a;
    a=*l**b;
    printf("area=%d\n",a);
}
void perimeter(int *l,int *b)
{
    int *p;
    p=2*(*l+*b);
    printf("perimeter=%d\n",p);
}