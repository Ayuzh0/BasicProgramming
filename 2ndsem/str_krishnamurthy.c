#include<stdio.h>
#include<conio.h>
struct kr
{
    int n,f,a,p,s;
};
void main()
{
    int i;
    struct kr ob;
    printf("Enter a number\n");
    scanf("%d",&ob.n);
    ob.p=ob.n;
    ob.s=0;
    for(;ob.p;)
    {
        ob.f=1;
        ob.a*=ob.p;
        for(i=1;i<=ob.a;i++)
            ob.f*=i;
        ob.s+=ob.f;
        ob.p/=10;
    }
    if(ob.s=ob.n)
        printf("Krishnamurthy number\n");
    else
        printf("Not a krishnamurthy number\n ");  
}