#include<stdio.h>
#include<conio.h>
void main()
{
    int a[50],i,n;
    int *ptr;
    ptr=a;
    printf("enter size of any array=");
    scanf("%d",&n);
    printf("\n\nenter array=");
    for(i=0;i<n;i++)
    {  
        scanf("%d",(ptr+i));
    }
    printf("display all element of any array \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(ptr + i));
    }
}
