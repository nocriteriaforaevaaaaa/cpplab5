// 3.WAP to implement stack operations using the concept of template.
#include<iostream>
#include<conio.h>
using namespace std;

template<class temp>
class stack
{
    private:
    temp arr[20];
    int top;
    public:
    stack()
    {
        top=-1;
    }
    void push(temp data)
    {
        arr[++top]=data;
    }
    temp pop()
    {
        return arr[top--];
    }
    int size()
    {
        return (top+1);
    }
};
int main()
{
    cout<<"stack for integer data type"<<endl;
    stack<int> sl;
    cout<<"size of the stack"<<sl.size()<<endl;
    sl.push(11);
    sl.push(22);
    sl.push(33);
    cout<<"size of the stack"<<sl.size()<<endl;
    cout<<"number popped"<<sl.pop()<<endl;
    cout<<"number popped"<<sl.pop()<<endl;
    cout<<"size of the stack"<<sl.size()<<endl;
    getch();
    return 0;

}
