#include <iostream>
using namespace std;
int main()
{
    short int x, y;
    cin >> x >> y;
    bool z = (1<x && x<4) && (2<y && y<7);
    cout << z;
}
