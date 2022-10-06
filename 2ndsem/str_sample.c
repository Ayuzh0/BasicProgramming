#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
    char nm[20];
    int age;
    char branch[40];
    char gender;
};
void main()
{
    struct student s1;
    s1.age=18;
    strcpy(s1.nm,"Rohit");
    strcpy(s1.branch,"Computer Science");
    s1.gender='M';
    printf("Name=%s\n",s1.nm);
    printf("Age=%d\n",s1.age);
    printf("Branch=%s\n",s1.branch);
    printf("Gender=%c\n",s1.gender);
}