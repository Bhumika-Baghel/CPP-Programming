#include <iostream>
using namespace std;

class Interest
{
public:
    float principal, rate, time;

    void calculate()
    {
        cout << "Simple Interest = "<< (principal * rate * time) / 100;
    }
};

int main()
{
    Interest i1;

    i1.principal = 1000;
    i1.rate = 5;
    i1.time = 2;

    i1.calculate();

    return 0;
}
