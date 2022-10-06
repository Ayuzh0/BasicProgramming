#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
    int n,i,j,f,s=0;
    int *ptr;
    printf("Enter size of any array\n");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    printf("Enter the members of the array\n");
    for(i=0;i<n;i++)
        scanf("%d",(ptr+i));
    for(i=0;i<n;i++)
    {
        f=1;
        for(j=1;j<=*(ptr+i);j++)
            f*=j;
        s+=f;
    }
    printf("Sum of factorials of all numbers in the array = %d",s);
    free(ptr);
    free()
}