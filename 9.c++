// 9.WAP to scan details of 50 employees and write it to a file named employee.dat. Also scan the details of employee from the file and display the information of only those employees whose salary is between 25000 and 50000.
 #include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
class employee
{
    public:
    char name[20];
    float sal;
};
int main()
{
    employee e[3];
    int i;
    ofstream outf("employee.txt");
    cout<<"enter the details of 50 employees"<<endl;
    for(i=0;i<3;i++)
    {
        cout<<"enter the name and salary of employees"<<endl;
        cin>>e[i].name>>e[i].sal;
        outf<<e[i].name<<endl<<e[i].sal<<endl;
    }
    outf.close();

ifstream inf("employee.txt");
cout<<"the details of the employees are"<<endl;
for(i=0;i<3;i++)
{
    if (e[i].sal>25000&& e[i].sal<50000)
    {
inf>>e[i].name>>e[i].sal;
cout<<"name="<<e[i].name<<endl<<"salary"<<e[i].sal<<endl;
}
inf.close();
getch();
return 0;
}
};

