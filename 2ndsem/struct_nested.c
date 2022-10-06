#include<stdio.h>
#include<conio.h>
void main()
{
    struct add
    {
        struct sum
        {
            int a,b,s;
        }ob;
    }ob1;
    printf("Enter two numbers\n");
    scanf("%d%d",&ob1.ob.a,&ob1.ob.b);
    ob1.ob.s=ob1.ob.a+ob1.ob.b;
    printf("Sum = %d\n",ob1.ob.s);
} 