// 7.WAP to implement multiple handler.
#include<iostream>
#include<conio.h>
#define max 2
using namespace std;
class stack
{
    protected:
    int s[max];
    int top;
    public:
    class full
    { };
    class empty
    { };
    stack()
    {
        top=-1;
    }
    void push(int x)
    {
        if(top==max-1)
        throw full();
        else
        s[++top]=x;
    }
    int pop()
    {
        if(top==-1)
        throw empty();
        else 
        return s[top--];
    }
};
int main()
{
    stack s;
    try
    {
        s.push(11);
        s.push(22);
        s.push(33);
        cout<<"number popped"<<s.pop()<<endl;
        cout<<"number popped"<<s.pop()<<endl;
        cout<<"number popped"<<s.pop()<<endl;
    }
    catch (stack::full)
    {
        cout<<"exception:stack is full"<<endl;
    }
    catch (stack::empty)
    {
        cout<<"exception: stack is empty"<<endl;
    }
    getch();
    return 0;


    
}