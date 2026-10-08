#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length, breadth;

    void area()
    {
        cout << "Area = " << length * breadth << endl;
    }
};

int main()
{
    Rectangle r1;

    r1.length = 10;
    r1.breadth = 5;

    r1.area();

    return 0;
}
