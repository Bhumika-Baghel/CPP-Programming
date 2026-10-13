#include <iostream>
using namespace std;

class Reverse
{
public:
    int n;

    void calculate()
    {
        int reverse = 0;

        while (n > 0)
        {
            int digit = n % 10;
            reverse = reverse * 10 + digit;
            n = n / 10;
        }

        cout << "Reverse = " << reverse;
    }
};

int main()
{
    Reverse r1;

    r1.n = 1234;
    r1.calculate();

    return 0;
}
