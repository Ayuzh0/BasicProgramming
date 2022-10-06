#include<stdio.h>
#include<conio.h>
void main()
{
    int r,c,i,j;
    printf("Enter r and c\n");
    scanf("%d%d",&r,&c);
    int m[r][c];
    //if(r==c)
    //{
        printf("Enter matrix\n");
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
        printf("Transpose\n");
        for(i=0;i<c;i++)
        {
            for(j=0;j<r;j++)
                printf("%d\t",m[j][i]);
            printf("\n");
        }
    //}
    //else
      //  printf("Number of rows and columns must be same");  
}
