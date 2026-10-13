#include <iostream>
using namespace std;

class Number
{
public:
    int n;

    void calculate()
    {
        int sum = 0;

        while (n > 0)
        {
            sum = sum + n % 10;
            n = n / 10;
        }

        cout << "Sum of digits = " << sum;
    }
};

int main()
{
    Number n1;

    n1.n = 1234;
    n1.calculate();

    return 0;
}
