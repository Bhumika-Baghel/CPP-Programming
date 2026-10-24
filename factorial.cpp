#include <iostream>
using namespace std;

class Factorial
{
public:
    int n, fact = 1;

    void calculate()
    {
        cout << "Enter a number: ";
        cin >> n;

        if (n < 0)
        {
            cout << "Factorial is not defined";
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                fact = fact * i;
            }

            cout << "Factorial = " << fact;
        }
    }
};

int main()
{
    Factorial obj;
    obj.calculate();

    return 0;
}
