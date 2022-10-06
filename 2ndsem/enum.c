#include<stdio.h>
#include<conio.h>
enum week
{
    sun,mon,tue=5,wed,thu,fri,sat
};
void main()
{
    enum week w;
    int i;
    printf("sun=%d\n",sun);
    printf("mon=%d\n",mon);
    printf("tue=%d\n",tue);
    printf("wed=%d\n",wed);
    w=mon;
    printf("The value of w is %d\n",w);
    for (i=sun;i<=sat;i++)
        printf("%d\t",i);
}
