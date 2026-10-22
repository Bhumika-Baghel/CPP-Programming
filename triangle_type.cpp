#include <iostream>
using namespace std;
class Triangle
{
public:
    int a, b, c;

    void identify()
    {
        if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a)
        {
            cout << "Invalid Triangle";
        }
        else if (a == b && b == c)
        {
            cout << "Equilateral Triangle";
        }
        else if (a == b || b == c || a == c)
        {
            cout << "Isosceles Triangle";
        }
        else
        {
            cout << "Scalene Triangle";
        }
    }
};

int main()
{
    Triangle obj;
    obj.a = 5;
    obj.b = 5;
    obj.c = 8;

    obj.identify();
    return 0;
}
