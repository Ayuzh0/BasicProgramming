#include<iostream>
using namespace std;
int main()
{
    int n,d1,d2,d3,d4,d5,s;
    cout<<"Enter a 5 digit number\n";
    cin>>n;
    d1=n%10;
    d2=(n/10)%10;
    d3=(n/100)%10;
    d4=(n/1000)%10;
    d5=(n/10000);
    s=d1+d2+d3+d4+d5;
    cout<<"Sum of 5 digits = "<<s<<endl;
    return 0;
}