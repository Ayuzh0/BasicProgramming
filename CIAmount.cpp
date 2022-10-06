#include<iostream>
using namespace std;
int main()
{
    double h,j=5.0,s=0;
    int c=0;
    system("cls");
    cout<<"Enter the height of the pole\n";
    cin>>h;
    while(h>0)
    {
        j=5-s;
        h-=j;
        s=j*0.02;
        c++;
    }
    cout<<"Number of attempts= "<<c<<endl;
    return 0;
}
