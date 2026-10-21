#include <iostream>
using namespace std;
class Triangle
{
public:
    int a, b, c;

    void check()
    {
        if (a > 0 && b > 0 && c > 0 &&
            a + b + c == 180)
            cout << "Valid Triangle";
        else
            cout << "Invalid Triangle";
    }
};

int main()
{
    Triangle obj;
    obj.a = 60;
    obj.b = 60;
    obj.c = 60;

    obj.check();
    return 0;
}
