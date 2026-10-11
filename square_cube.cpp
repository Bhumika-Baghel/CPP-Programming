#include <iostream>
using namespace std;

class Calculate
{
public:
    int n;

    void display()
    {
        cout << "Square = " << n * n << endl;
        cout << "Cube = " << n * n * n;
    }
};

int main()
{
    Calculate c1;
    c1.n = 4;
    c1.display();

    return 0;
}
