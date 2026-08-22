#include<iostream>
#include<string>
using namespace std;
struct student
{
       string name;
       int roll_number;
       double gpa;
};
int main()
{
    student s1;
    s1.name = "Bhumika";
    s1.roll_number = 63;
    s1.gpa = 9.7;
    
    student s2 = { "Bhumika", 43 , 8.8};
    
    cout<<" student 1 data "<<endl;
    cout<<"student name:"<<s1.name<<endl;
    cout<<"student roll_number:"<<s1.roll_number<<endl;
    cout<<"student gpa:"<<s1.gpa<<endl;

    cout<<" student 2 data "<<endl;
    cout<<"student name:"<<s2.name<<endl;
    cout<<"student roll_number:"<<s2.roll_number<<endl;
    cout<<"student gpa:"<<s2.gpa<<endl;

    return 0;
}
