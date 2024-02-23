// 8.WAP to scan details of 48 students and write it to a file student.txt. Also scan the details of students from the file and display to the console.
#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
class student
{
    public:
    char name[20],fac[20];
    int id;
};
int main()
{
    student s[10];
    int i;
    ofstream outf("student.txt");
    cout<<"enter the details of 48 students"<<endl;
    for(i=0;i<3;i++)
    {
        cout<<"enter the name,faculty and id of students"<<endl;
        cin>>s[i].name>>s[i].fac>>s[i].id;
        outf<<s[i].name<<endl<<s[i].fac<<endl<<s[i].id<<endl;
    }
    outf.close();

ifstream inf("student.txt");
cout<<"the details of the students are"<<endl;
for(i=0;i<3;i++)
{
inf>>s[i].name>>s[i].fac>>s[i].id;
cout<<"name="<<s[i].name<<endl<<"faculty="<<s[i].fac<<endl<<"id="<<s[i].id<<endl;
}
inf.close();
getch();
return 0;
}

