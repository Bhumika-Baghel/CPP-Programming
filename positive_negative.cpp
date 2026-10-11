#include <iostream>
using namespace std;

class Number
{
public:
    int n;

    void check()
    {
        if (n > 0)
            cout << "Positive Number";
        else if (n < 0)
            cout << "Negative Number";
        else
            cout << "Zero";
    }
};

int main()
{
    Number obj;
    obj.n = -5;
    obj.check();

    return 0;
}
