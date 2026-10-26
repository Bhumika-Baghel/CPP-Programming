
#include <iostream>
using namespace std;

class Table
{
public:
    int number;

    void display()
    {
        for (int i = 1; i <= 10; i++)
        {
            cout << number << " x " << i
                 << " = " << number * i << endl;
        }
    }
};

int main()
{
    Table obj;
    obj.number = 5;
    obj.display();

    return 0;
}
