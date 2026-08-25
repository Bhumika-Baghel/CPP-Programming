#include<iostream>
using namespace std;

class point
{
    private:
        int x, y;
    public:
        void setdata(int a , int b)
        {
            x = a;
            y = b;
        }
        void display()
        {
            cout<<"("<<x<<","<<y<<")"<<endl;
        }
        void calculatedistance(point p)
        {
            int dx = x - p.x;
            int dy = y - p.y;
            
            cout<<"distance = "<<(dx*dx + dy*dy)<<endl;
        }
};
int main()
{
    point p1 , p2;

    p1.setdata(10,20);
    p2.setdata(5,10);

    cout<<"point p1: ";
    p1.display();

    cout<<"point p2: ";
    p2.display();
    
    p1.calculatedistance(p2);
    return 0;
}
