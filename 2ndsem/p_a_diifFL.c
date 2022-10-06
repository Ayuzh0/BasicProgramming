#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
    int n,i,diff;
    int *ptr;
    printf("Enter size of any array\n");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    printf("Enter the members of the array\n");
    for(i=0;i<n;i++)
        scanf("%d",(ptr+i));
    diff=*(ptr+(n-1)) - *ptr;
    printf("Difference between first and last element= %d",diff);
    free(ptr);
}