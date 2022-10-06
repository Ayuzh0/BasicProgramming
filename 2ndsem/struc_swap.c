#include<stdio.h>
#include<conio.h>
void main()
{
    struct swap
    {
        struct swapping
        {
            int a,b;
        }sw;
    }sw1;
    printf("Enter 2 numbers\n");
    scanf("%d%d",&sw1.sw.a,&sw1.sw.b);
    sw1.sw.a=sw1.sw.a+sw1.sw.b;
    sw1.sw.b=sw1.sw.a-sw1.sw.b;
    sw1.sw.a=sw1.sw.a-sw1.sw.b;
    printf("First number= %d\n",sw1.sw.a);
    printf("Second number= %d",sw1.sw.b);
}