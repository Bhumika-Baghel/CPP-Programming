#include <iostream>
using namespace std;

class Addition
{
public:
    int a, b;

    void add()
    {
        cout << "Sum = " << a + b << endl;
    }
};

int main()
{
    Addition obj;

    obj.a = 10;
    obj.b = 20;

    obj.add();

    return 0;
}
