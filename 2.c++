// 2.WAP to implement the concept of function template overloading.
#include<iostream>
#include<conio.h>
using namespace std;
template<class tem>
void print (tem data)
{
    cout<<"Generic data type"<<data<<endl;
}
void print(int data)
{
    cout<<"Integer type data"<<data<<endl;
}
int main()
{
    print(123);
    print(123.123);
    print("aeva");
    getch();
    return 0;
}