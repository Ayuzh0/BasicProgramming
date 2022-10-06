#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
    int n,i,s=0;
    float avg;
    int *ptr;
    printf("Enter size of any array\n");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    printf("Enter the members of the array\n");
    for(i=0;i<n;i++)
        scanf("%d",(ptr+i));
    for(i=0;i<n;i++)
        s+=(*(ptr+i));
    avg=(float)s/n;
    printf("Sum=%d\n",s);
    printf("Average=%f",avg);
    free(ptr);
}