#include<iostream>
using namespace std;
class Stack
{
    int st[999];
    int lim;
    public:
    Stack()
    {
        lim=-1;
    }
    void push(int n)
    {
        lim++;
        st[lim]=n;
    }
    void pop()
    {
        if(lim>=0)
        {
            cout<<st[lim]<<" popped\n";
            st[lim]=NULL;
            lim--;
        }
        else
            cout<<"Stack empty\n";
    }
    void display()
    {
        cout<<"STACK:\n\n";
        for(int i=lim;i>=0;i--)
            cout<<st[i]<<endl;
    }
};
int main()
{
    Stack ob;
    int ch,val;
    cout<<"Stack operation\n";
    do
    {
        cout<<"Enter 1 to push, 2 to pop, 3 to display stack and 0 to exit\n";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"Enter value to be pushed\n";
            cin>>val;
            ob.push(val);
            break;
        case 2:
            ob.pop();
            break;
        case 3:
            ob.display();
            break;
        case 0:
            cout<<"Thank you...\n";
            break;
        default:
            cout<<"Invalid choice\n";
        }
    } while (ch!=0);
    return 0;
}