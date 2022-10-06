#include<iostream>
using namespace std;
class Complex
{
    private:
        long r, img;
    public:
        void input()
        {
            cout<<"Enter real and imaginary\n";
            cin>>r>>img;
        }
        void display()
        {
            cout<<r<<"+"<<img<<"i"<<endl;
        }
    friend Complex sum(Complex,Complex);
};
Complex sum(Complex c1,Complex c2)
{
    Complex result;
    result.r= c1.r+c2.r;
    result.img=c1.img+c2.img;
    return result;
}
int main()
{
    Complex c1,c2,c3;
    c1.input();
    c2.input();
    c3=sum(c1,c2);
    c3.display();
    return 0;
}

