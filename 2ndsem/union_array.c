//array of union
#include<stdio.h>
#include<conio.h>
union player
{
    char nm[20];
    int age;
};
void main()
{
    union player o1[5];
    union player o2[5];
    int i;
    printf("Enter 5 player'snames\n");
    for(i=0;i<5;i++)
        scanf("%s",o1[i].nm);
    printf("Enter the age of 5 players\n");
    for(i=0;i<5;i++)
        scanf("%d",&o2[i].age);
    printf("Data:\n");
    for(i=0;i<5;i++)
    {
        printf("Name: %s\t",o1[i].nm);
        printf("Age: %d\n",o2[i].age);
    }
}