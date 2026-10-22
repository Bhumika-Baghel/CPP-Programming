#include <iostream>
#include <cmath>
using namespace std;
class Quadratic
{
public:
    double a, b, c;

    void findRoots()
    {
        if (a == 0)
        {
            cout << "Not a Quadratic Equation";
            return;
        }

        double d = b * b - 4 * a * c;

        if (d > 0)
        {
            cout << "Root 1 = "
                 << (-b + sqrt(d)) / (2 * a) << endl;
            cout << "Root 2 = "
                 << (-b - sqrt(d)) / (2 * a);
        }
        else if (d == 0)
        {
            cout << "Repeated Root = " << -b / (2 * a);
        }
        else
        {
            cout << "Real roots do not exist" << endl;
            cout << "Real Part = " << -b / (2 * a) << endl;
            cout << "Imaginary Part = "
                 << sqrt(-d) / (2 * a);
        }
    }
};

int main()
{
    Quadratic obj;
    obj.a = 1;
    obj.b = -5;
    obj.c = 6;

    obj.findRoots();
    return 0;
}
