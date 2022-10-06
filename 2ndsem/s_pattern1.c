#include<stdio.h>
#include<conio.h>
main()
{
    char nm[20];
    int i,j,l=0;
    printf("Enter a string\n");
    gets(nm);
    for(i=0;nm[i]!='\0';i++)
        l++;
    for(i=l-1;i>=0;i--)
    {
        for(j=0;j<=i;j++)
            printf("%c",nm[j]);
        printf("\n");
        
    }
}