#include<stdio.h>
#include<conio.h>
struct test
{
    int x;
    float y;
    char z;
};
union testing
{
    int x;
    float y;
    char z;
};
void main()
{
    struct test s={2,2.5,'a'};
    union testing u={2,2.5,'a'};
    printf("Integer= %d\n",s.x);
    printf("float= %f\n",s.y);
    printf("char= %c\n",s.z);
    printf("Integer= %d\n",u.x);
    printf("float= %f\n",u.x);
    printf("char= %c\n",u.x);
}