#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x;
    cin >> x;
    cout.precision(4);
    cout << fixed << 3*sqrt(x);
    return 0;
}
