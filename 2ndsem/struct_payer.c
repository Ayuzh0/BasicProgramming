#include<stdio.h>
#include<conio.h>
struct player
{
    char nm[20];
    int age;
};
void main()
{
    struct player pa[5];
    int i;
    printf("Enter player name and age\n");
    for(i=0;i<5;i++)
        scanf("%s%d",&pa[i].nm,&pa[i].age);
    printf("Displaying 5 player  names and age\n");
    for(i=0;i<5;i++)
        printf("Name= %s Age= %d\n",pa[i].nm,pa[i].age);
}