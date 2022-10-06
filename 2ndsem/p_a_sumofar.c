/*sum of two arrays using calloc function */
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
    int n,i;
    int *ptr,*ptr1,*s;
    printf("Enter size of the arrays\n");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    printf("Enter the members of first array\n");
    for(i=0;i<n;i++)
        scanf("%d",(ptr+i));
    ptr1=(int *)malloc(n*sizeof(int));
    printf("Enter the members of second array\n");
    for(i=0;i<n;i++)
        scanf("%d",(ptr1+i));
    s=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        *(s+i)=*(ptr+i)+*(ptr1+i);
    printf("Sum of the 2 arrays:\n");
    for(i=0;i<n;i++)
        printf("%d\n",*(s+i));    
}