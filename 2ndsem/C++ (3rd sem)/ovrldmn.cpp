#include<iostream>
using namespace std;
class first
{
    public:
    void main(int a)
    {
        cout<<a<<endl;
    }
    void main(double d)
    {
        cout<<d<<endl;
    }
    void main(char c)
    {
        cout<<c<<endl;
    }
};
int main()
{
    first f1;
    f1.main(2);
    f1.main(6.9);
    f1.main('m');
    return 0;
}