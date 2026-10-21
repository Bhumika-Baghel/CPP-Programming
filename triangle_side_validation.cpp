#include <iostream>
using namespace std;
class Triangle
{
public:
    int a, b, c;

    void check()
    {
        if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a)
            cout << "Valid Triangle";
        else
            cout << "Invalid Triangle";
    }
};

int main()
{
    Triangle obj;
    obj.a = 3;
    obj.b = 4;
    obj.c = 5;

    obj.check();
    return 0;
}
