#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length, breadth;

    void perimeter()
    {
        cout << "Perimeter = "
             << 2 * (length + breadth);
    }
};

int main()
{
    Rectangle r1;
    r1.length = 8;
    r1.breadth = 4;

    r1.perimeter();

    return 0;
}
