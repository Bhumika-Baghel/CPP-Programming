#include<iostream>
#include<string>
using namespace std;
void greet(string);
int main()
{
    greet("churchil");
    greet("riya");
    return 0;
}
void greet(string name)
{
    cout<<"Hello "<<name<<"! Welcome"<<endl;
}
