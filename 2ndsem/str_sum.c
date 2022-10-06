#include<stdio.h>
#include<conio.h>
struct sum
{
    int a;
    int b;
};
void main()
{
    struct sum s1={4,5};
    int s;
    s=s1.a+s1.b;
    printf("sum=%d",s);
}

