#include<iostream>
using namespace std;
int main()
{
    cout<<"\nsize of int="<<sizeof(int);
    cout<<"\nsize of float="<<sizeof(float);
    cout<<"\nsize of char="<<sizeof(char);
    cout<<"\nsize of double="<<sizeof(double);
    cout<<"\nsize of long="<<sizeof(long);
    cout<<"\nsize of long int="<<sizeof(long int);
    cout<<"\nsize of short int="<<sizeof(short int);
    cerr<<"\nsize of unsigned int="<<sizeof(unsigned int);
    clog<<"\nsize of wchar_t="<<sizeof(wchar_t);
    return 0;
}