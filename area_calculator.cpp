
#include <iostream>
using namespace std;

class Circle
{
public:
    float radius;

    void area()
    {
        cout << "Area = " << 3.14 * radius * radius;
    }
};

int main()
{
    Circle c1;

    c1.radius = 5;
    c1.area();

    return 0;
}
