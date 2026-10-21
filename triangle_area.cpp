#include <iostream>
using namespace std;

class Triangle
{
public:
    int base, height;

    void calculateArea()
    {
        cout << "Area of Triangle = "<< (base * height) / 2.0;
    }
};

int main()
{
    Triangle t1;

    t1.base = 10;
    t1.height = 6;

    t1.calculateArea();

    return 0;
}
