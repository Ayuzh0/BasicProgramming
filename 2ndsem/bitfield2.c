#include<stdio.h>
#include<conio.h>
struct xyz
{
    unsigned int age:3;
};
void main()
{
    struct xyz ob;
    ob.age=4;//3 bits
    printf("Sizeof(ob): %d\n",sizeof(ob));
    printf("Age:%d\n",ob.age);
    ob.age=7;//3 bits
    printf("Age:%d\n",ob.age);
    ob.age=8;//more than 3 bits
    printf("Age:%d\n",ob.age);
}