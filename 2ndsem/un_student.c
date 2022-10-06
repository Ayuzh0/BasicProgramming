#include<stdio.h>
#include<conio.h>
union student
{
    char snm[40];
    char fnm[40];
    char add[40];
    char enroll[40];
    char age[40];
};
void main()
{
    union student s1,s2,s3,s4,s5;
    printf("Enter student's name\n");
    scanf("%s",s1.snm);
    printf("Enter student's father's name\n");
    scanf("%s",s2.fnm);
    printf("Enter student's address\n");
    scanf("%s",s3.add);
    printf("Enter student's enrollment\n");
    scanf("%s",s4.enroll);
    printf("Enter student's age\n");
    scanf("%s",s5.age);
    printf("Name: %s\n",s1.snm);
    printf("Father's name: %s\n",s2.fnm);
    printf("Address: %s\n",s3.add);
    printf("Enrollment: %s\n",s4.enroll);
    printf("Age: %s\n",s5.age);
}
