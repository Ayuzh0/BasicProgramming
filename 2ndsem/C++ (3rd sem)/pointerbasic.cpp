#include<iostream>
using namespace std;
int main()
{
    int i,j;
    void *p,*q;
    p=&i;
    q=&j;
    for(*(int*)q=1;*(int*)q<=5;(*(int*)q)++)
    {
        for(*(int*)p=1;*(int*)p<=5;(*(int*)p)++)
            cout<<*(int*)p<<"\t";
        cout<<"\n";
    }
    return 0;
}
