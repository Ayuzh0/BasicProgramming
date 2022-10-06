#include<iostream>
using namespace std;
class frequency
{
    private:
    char nm [20];
    public:
    void input();
    friend void calculate(frequency);
};
void frequency::input()
{
    cout<<"enter any string\n";
    cin>>nm;
}
void calculate(frequency ob)
{
    int i,alphabet[26]={0},j;
    for(i=0;ob.nm[i]!='\0';i++)
    {
        if(ob.nm[i]>='a'&&ob.nm[i]<'z')
            j=ob.nm[i]-'a';
        ++alphabet[j];
    }
    for(i=0;i<26;i++)
    {
        if(alphabet[i]!=0)
            cout<<char(i+'a')<<"="<<alphabet[i]<<endl;
    }
}
int main()
{
    frequency fr;
    fr.input();
    calculate(fr);
    return 0;
}