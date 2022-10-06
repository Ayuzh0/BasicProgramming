#include<stdio.h>
#include<conio.h>
typedef struct student
{
    char nm[20];
    int age;
}stud;
void main()
{
    stud s1;
    printf("Enter the details s1\n");
    printf("Enter the name of the student\n");
    scanf("%s",s1.nm);
    printf("Enter the age of the student\n");
    scanf("%d",&s1.age);
    printf("Name: %s\n",s1.nm);
    printf("Age: %d\n",s1.age);
}