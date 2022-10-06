#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int *ptr1,*ptr2;
    ptr1=(int*)calloc(1,sizeof(int));
    ptr2=(int*)calloc(1,sizeof(int));
    printf("Enter 2 numbers\n");
    scanf("%d%d",ptr1,ptr2);
    printf("Sum=%d\n",(*ptr1+*ptr2));
    free(ptr1);
    free(ptr2);
}