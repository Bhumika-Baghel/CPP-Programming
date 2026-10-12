#include <iostream>
using namespace std;

class Power
{
public:
    int base, exponent;

    void calculate()
    {
        int result = 1;

        for (int i = 1; i <= exponent; i++)
        {
            result = result * base;
        }

        cout << "Power = " << result;
    }
};

int main()
{
    Power p1;

    p1.base = 2;
    p1.exponent = 4;

    p1.calculate();

    return 0;
}
