#include <iostream>
using namespace std;
int sq(int a,int b)
{
    return a*b;
}
double division(int x,int y)
{
    return x/y;
}
int main()
{
    int a,b,c,x,y;
    system("cls");
    cout<<"Enter the values of a, b ,c"<<endl;
    cin>>a>>b>>c;
    x=sq(a,a)+sq(b,b)+sq(c,c)+sq(a,b)+sq(b,c)+sq(c,a);
    y=sq(a,a)+sq(b,b)+sq(c,c)-sq(a,b)-sq(b,c)-sq(c,a);
    cout<<"result of the expression="<<division(x,y)<<endl;
    return 0;
}