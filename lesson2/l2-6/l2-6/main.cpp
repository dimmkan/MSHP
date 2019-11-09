#include <iostream>
using namespace std;

int main()
{
    short int x;
    int x2, x3, y;
    cin >> x;
    x2 = x*x;
    x3 = x*x*x;
    y = (3*x3 + 18*x2)*x + 12*x2 - 5;
    cout << y;
    return 0;
}
