#include<stdio.h>
#include<conio.h>
void main()
{
    int n1,n2,i;
    printf("Enter the size of the first array\n");
    scanf("%d",&n1);
    int a1[n1];
    printf("Enter the elements of first array\n");
    for(i=0;i<n1;i++)
        scanf("%d",&a1[i]);
    printf("Enter the size of the second array\n");
    scanf("%d",&n2);
    int a2[n2];
    printf("Enter the elements of first array\n");
    for(i=0;i<n2;i++)
        scanf("%d",&a2[i]);
    int a3[n1+n2];
    for(i=0;i<n1;i++)
        a3[i]=a1[i];
    for(i=0;i<n2;i++)
        a3[i+n1]=a2[i];
    printf("the merged array:\n");
    for(i=0;i<n1+n2;i++)
        printf("%d\t",a3[i]);
}