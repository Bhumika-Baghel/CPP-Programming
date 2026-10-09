#include <iostream>
using namespace std;

class Student
{
public:
    int m1, m2, m3;

    void result()
    {
        int total = m1 + m2 + m3;
        float percentage = total / 3.0;

        cout << "Total Marks = " << total << endl;
        cout << "Percentage = " << percentage << "%";
    }
};

int main()
{
    Student s1;

    s1.m1 = 80;
    s1.m2 = 75;
    s1.m3 = 90;

    s1.result();

    return 0;
}
