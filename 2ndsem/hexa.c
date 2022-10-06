//decimal to hexadecimal
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,b[99],c,i;
    printf("Enter a number\n");
    scanf("%d",&n);
    c=n;
    i=0;
    while(c>0)
    {
        b[i]=c%16;
        i++;
        c/=16;
    }
    i-=1;
    printf("The hexadecimal value of %d is 0x",n);
    while(i>=0)
    {
        if(b[i]<10)
            printf("%d",b[i]);
        else
            printf("%c",(char)(b[i]-10)+65);
        i--;
    }
}