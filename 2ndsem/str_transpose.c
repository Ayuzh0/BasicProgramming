#include<stdio.h>
#include<conio.h>
struct transpose
{
    int r,c,a[20][20];
};
void main()
{
    struct transpose ob;
    int i,j;
    printf("Enter rows and columns\n");
    scanf("%d%d",&ob.r,&ob.c);
    printf("Enter matrix\n");
    for(i=0;i<ob.r;i++)
        for(j=0;j<ob.c;j++)
            scanf("%d",&ob.a[i][j]);
    printf("Treanspose:\n");
    for(i=0;i<ob.r;i++)
    {
        for(j=0;j<ob.c;j++)
            printf("%d \t",ob.a[j][i]);
            printf("\n");
    }

}