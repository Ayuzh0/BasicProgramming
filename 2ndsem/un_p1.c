#include<stdio.h>
#include<conio.h>
union xyz
{
    int x;
    float y;
    char z;
};
void main()
{
    union xyz ob,ob1,ob2;
    printf("Enter int, float\n");
    scanf("%d%f",&ob.x,&ob1.y);
    fflush(stdin);
    printf("Enter char\n");
    scanf("%c",&ob2.z);
    printf("Int = %d\n",ob.x);
    printf("float = %f\n",ob1.y);
    printf("char = %c\n",ob2.z);
}