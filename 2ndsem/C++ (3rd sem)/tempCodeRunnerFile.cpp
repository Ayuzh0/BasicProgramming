#include<iostream>
using namespace std;
ostream &currency(ostream &out)
{
    out<<"Rs";
    return (out);
}
int main()
{
    cout<<currency<<3.416<<endl;
    cout<<currency<<69<<endl;
    cout<<currency<<150<<endl;
    return 0;
}
