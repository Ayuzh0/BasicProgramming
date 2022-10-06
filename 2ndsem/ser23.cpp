#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of terms\n";
    cin>>n;
    cout<<"The given series:\n";
    for(int i=5;i<=5*n;i+=5)
        cout<<i*i-1<<" ";
    return 0;
}
