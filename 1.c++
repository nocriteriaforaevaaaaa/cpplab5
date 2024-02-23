// 1.WAP to calculate the perimeter of a rectangle using the concept of class template.
#include<iostream>
#include<conio.h>
using namespace std;
template <class tem>
tem per(tem l,tem b)
{
    return(2*(l+b));
}
int main()
{
    int l1=20,b1=5;
    cout<<"The perimeter of rectangle is"<<per(l1,b1)<<endl;
    getch();
    return 0;
}
