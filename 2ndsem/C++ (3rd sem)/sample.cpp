#include<iostream>
using namespace std;
class sum
{
    private:
        int a,b,s;
    public:
        sum(int x,int y)
        {
            a=x;
            b=y;
        }
        sum(sum &ob)
        {
            a=ob.a;
            b=ob.b;
        }
        void output()
        {
            s=a+b;
            cout<<"s="<<s<<endl;
        }
};
int main()
{
    sum s1(2,3);
    sum s2(s1);
    s1.output();
    s2.output();
    return 0;
}