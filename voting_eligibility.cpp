#include <iostream>
using namespace std;

class Voter
{
public:
    int age;

    void check()
    {
        if (age >= 18)
            cout << "Eligible for voting";
        else
            cout << "Not eligible for voting";
    }
};

int main()
{
    Voter v1;
    v1.age = 20;
    v1.check();

    return 0;
}
