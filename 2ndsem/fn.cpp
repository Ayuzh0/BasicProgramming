// function example
#include <iostream>
using namespace std;
int addition (int a, int b)
{
int r;
int d;
r=a+b;
d=a-b;
return (r);
}
int difference(int a, int b)
{
    int d;
    return a-b;
}
int main ()
{
int z,n1,n2;
cout<<"Enter two numbers"<<endl;
cin>>n1>>n2;
z = addition (n1,n2);
cout << "The result is " << z;
return 0;
}