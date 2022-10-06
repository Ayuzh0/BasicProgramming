#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class Stmt
{
    public:
    string st;
    char ch[99];
    int freq[99];
    int length;
    void input()
    {
        cout<<"Enter a string \n";
        cin>>st;
    }
    void output()
    {
        cout<<"Frequency\n";
        for(int i=0;i<length;i++)
            cout<<ch[i]<<"\t"<<freq[i]<<endl;

    }
    friend void freqency(Stmt);
};
void frequency(Stmt s)
{
    char c;
    int ar,k=0;
    s.length=0;
    string str= s.st;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    char alpha[]= {'a','b','c','d','e','f','g','h','i','j','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    for(char i='a';i<='z';i++)
    {
        s.freq[k]=0;
        for(int j=0;j<str.length();j++)
        {
            if(i==str.at(j))
            {
                s.ch[k]=i;
                s.freq[k]++;
            }
        }
        if(s.freq[k]>0)
        {
            k++;
            s.length++;
        }
    }
    cout<<s.length;
}
int main()
{
    Stmt ob;
    ob.input();
    frequency(ob);
    ob.output();
    return 0;
}