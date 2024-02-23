// 4.WAP to find the square root of a number using the concept of exception handing
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    try
    {
        if (n<0)
        {
            throw (n);
        }
        else{
            cout<<"the square root is"<<sqrt(n);
        }
    }
    catch(int n1)
    {
        cout<<"The square root of negative no cannot be found"<<endl;

    }
    getch();
    return 0;
    
    
    
}