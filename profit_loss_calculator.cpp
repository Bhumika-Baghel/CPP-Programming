#include <iostream>
using namespace std;
class Business
{
public:
    float costPrice, sellingPrice;

    void calculate()
    {
        if (sellingPrice > costPrice)
            cout << "Profit = " << sellingPrice - costPrice;
        else if (costPrice > sellingPrice)
            cout << "Loss = " << costPrice - sellingPrice;
        else
            cout << "No Profit No Loss";
    }
};

int main()
{
    Business obj;
    obj.costPrice = 500;
    obj.sellingPrice = 650;

    obj.calculate();
    return 0;
}
