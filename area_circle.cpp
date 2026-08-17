#include<iostream>
using namespace std;
int main()
{
    float radius,area;
    const float pi = 3.14;
    
    cout<<"Enter radius:"<<endl;
    cin>>radius;

    area = pi*radius*radius;
    cout<<"Area of circle = "<<area<<endl;
    return 0;
}
