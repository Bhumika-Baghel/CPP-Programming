#include<iostream>
using namespace std;
enum direction
{
    EAST,
    NORTH,
    WEST,
    SOUTH
};
int main()
{
    direction direction = NORTH;
    cout<<direction;
    return 0;
}
