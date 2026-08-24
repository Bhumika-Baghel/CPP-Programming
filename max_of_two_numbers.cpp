#include<iostream>
using namespace std;

float findlargest(float,float);
int main()
{  
    float x = 12.5, y = 20.3;
    float largest = findlargest(x,y);
    cout<<"largest number = "<<largest<<endl;
    return 0;
}
float findlargest(float a, float b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
