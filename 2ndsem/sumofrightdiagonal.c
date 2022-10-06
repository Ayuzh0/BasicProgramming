#include<stdio.h>
#include<conio.h>
void main()
{
    int r,c,i,j,s=0,x=0;
    printf("Enter r and c\n");
    scanf("%d%d",&r,&c);
    int m[r][c];
    printf("ENter matrix\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&m[i][j]);
    printf("Display matrix \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d\t",m[i][j]);
        printf("\n");
    }
    printf("\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            x=i+j;
            if(x==r-1)
                s+=m[i][j];
        }  
    }  
    printf("Sum of left diagonal %d",s);
}