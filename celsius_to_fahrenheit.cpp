#include <iostream>
using namespace std;

class Temperature
{
public:
    float celsius;

    void convert()
    {
        float fahrenheit = (celsius * 9 / 5) + 32;
        cout << "Fahrenheit = " << fahrenheit;
    }
};

int main()
{
    Temperature t1;

    t1.celsius = 25;
    t1.convert();

    return 0;
}
