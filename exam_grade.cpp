#include <iostream>
using namespace std;

class Exam
{
public:
    int marks;

    void calculateGrade()
    {
        if (marks < 0 || marks > 100)
            cout << "Invalid Marks";
        else if (marks >= 90)
            cout << "Grade A";
        else if (marks >= 75)
            cout << "Grade B";
        else if (marks >= 60)
            cout << "Grade C";
        else if (marks >= 33)
            cout << "Grade D";
        else
            cout << "Fail";
    }
};

int main()
{
    Exam e1;

    e1.marks = 82;
    e1.calculateGrade();

    return 0;
}
