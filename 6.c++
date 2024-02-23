// 6.WAP to implement catching all exception.
#include<iostream>
#include<conio.h>
using namespace std;
class Array
{
    private:
    int arr[20];
    public:
    class lowrange{};
    class highrange{};
    int &operator[](int i)
    {
        if(i<0)
        throw lowrange();
        else if(i>=20)
        throw highrange();
        return arr[i];
    }
};
int main()
{
    Array al;
    int index;
    try
    {
        cout<<"enter array index"<<endl;
        cin>>index;
        al[index]=20;
        cout<<index<<"is within the range"<<endl;

    }
    catch(...)
    {
        cout<<"exception:out of range"<<endl;
    }
    getch();
    return 0;
    
}