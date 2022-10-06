//uppercase and lower case letters
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,u=0,l=0,c;
    char w[25],r[25];
    printf("Enter a string\n");
    scanf("%s",w);
    for(i=0;w[i]!='\0';i++)
    {
        c=(int)w[i];
        if(c>=65&&c<=90)
            u++;
        else if(c>=97&&c<=122)
            l++;
    }
    printf("Number of lower case letters= %d\n",l);
    printf("Number of upper case letters= %d\n",u);
}