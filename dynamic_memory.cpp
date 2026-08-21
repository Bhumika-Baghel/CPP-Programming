#include<iostream>
using namespace std;
int main()
{
    int *nptr;

    nptr = new int[5]{ 1,2,3,4,5} ;// allocate memory
    cout<<*nptr<<endl; // value
    cout<<nptr; //address
    delete[] nptr;
    return 0;
}
