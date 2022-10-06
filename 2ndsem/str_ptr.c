#include<stdio.h>
#include<conio.h>
struct sum
{
    int a,b,s;
};
void main()
{
    struct sum ob;
    struct sum *ptr;
    printf("Enter 2 num\n");
    scanf("%d%d",&ptr->a,&ptr->b);
    ptr->s=ptr->a+ptr->b;
    printf("Sum= %d",ptr->s);
}
