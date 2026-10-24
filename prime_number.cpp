#include <iostream>
using namespace std;

class Prime
{
public:
    int n, i, count = 0;

    void check()
    {
        cout << "Enter a number: ";
        cin >> n;

        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }

        if (count == 2)
            cout << "Prime Number";
        else
            cout << "Not a Prime Number";
    }
};

int main()
{
    Prime obj;
    obj.check();

    return 0;
}
