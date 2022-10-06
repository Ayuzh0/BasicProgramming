#include<stdio.h>
#include<conio.h>
union sum
{
    int a,b,s;
};
//function prototype
void sum(union sum s1, union sum s2);
void main()
{
    union sum s1,s2;
    printf("Enter 2 numbers:\n");
    scanf("%d%d",&s1.a,&s2.b);
    //caling function
    sum(s1,s2);
}
void sum(union sum s1, union sum s2)
{
    union sum s3;
    s3.s=s1.a+s2.b;
    printf("Answer= %d\n",s3.s);
}