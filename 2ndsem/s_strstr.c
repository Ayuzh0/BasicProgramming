#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char nm[100]= "Computer is an electronic machine";
    char *ptr;
    ptr=strstr(nm,"an");
    printf("%s\n",ptr);
}