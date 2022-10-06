#include <iostream>
using namespace std;
double feet(double i)
{
    return i/12.0;
}
int main()
{
    double i;
    cout<<"Enter the length in inches"<<endl;
    cin>>i;
    cout<<"length in feet = "<<feet(i);
    return 0;
}