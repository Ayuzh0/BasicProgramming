#include<iostream>
using namespace std;
int main()
{
    int n1,n2,d1,d2,temp;
    cout<<"Enter 2 numbers\n";
    cin>>n1>>n2;
    d1=n1;//initialization
    d2=n2;
    while(d1!=0)//condition 
    {
        temp=d1;
        d1=d2%d1;//alteratione
        d2=temp;
    }
    cout<<"GCD of "<<n1<<" & "<<n2<<" : "<<d2;
}