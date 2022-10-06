#include<stdio.h>
#include<conio.h>
int i,j;
void main()
{
    int a[90],n;
    int ascending(int n,int a[]);
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    a[n];
    printf("Enter the members of array \n");\
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    a[n]=ascending(n,a);
    printf("Ascending order\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    
}
int ascending(int n,int a[])
{
    int r;
    a[n];
    for(i=0;i<n;i++)
        for(j=i;j<n;j++)
            if(a[i]>a[j])
            {
                    r=a[i];
                    a[i]=a[j];
                    a[j]=r;
            }
    return a;
}