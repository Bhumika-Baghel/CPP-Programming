#include<iostream>
#include<string>
using namespace std;
class student
{
    private:
         int roll_number;
         string name;
         float marks;
    public:
    void inputdata()
    {
        cout<<"enter roll number:";
        cin>>roll_number;
        cout<<"enter name:";
        cin.ignore();
        getline(cin,name);
        cout<<"enter marks:";
        cin>>marks;
    }
    void display() const
    {
    cout<<"student data"<<endl;
    cout<<"roll_number-"<<roll_number<<endl;
    cout<<"name-"<<name<<endl;
    cout<<"marks-"<<marks<<endl;
    }
};
int main()
{
    student student;
    cout<<"student info \n";
    student.inputdata();
    student.display();
    return 0;
}
