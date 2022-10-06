#include<stdio.h>
#include<conio.h>
void main()
{
    struct sum //name of structure, user-defined/compund/abstract datatype
    {
        int a,b,s;
    }ob; //structure variable
    printf("Enter 2 numbers \n");
    scanf("%d%d",&ob.a,&ob.b);
    ob.s=ob.a+ob.b;
    printf("Sum= %d\n",ob.s);
}