#include<stdio.h>
#include<conio.h>
void main()
{
    char nm[20];
    int i,l=0;
    printf("Enter any string\n");
    scanf("%s",nm);
    for(i=0;nm[i]!='\0';i++)
    {
        if(nm[i]>='a'&&nm[i]<='z')
            printf("%c",(char)nm[i]-32);
    
    }
}
