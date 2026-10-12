#include <iostream>
using namespace std;

class Year
{
public:
    int y;

    void check()
    {
        if (y % 400 == 0 ||
           (y % 4 == 0 && y % 100 != 0))
            cout << "Leap Year";
        else
            cout << "Not a Leap Year";
    }
};

int main()
{
    Year obj;

    obj.y = 2024;
    obj.check();

    return 0;
}
