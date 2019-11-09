#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double radius;
    cin >> radius;
    double p = 3.14*pow(radius, 2.0);
    cout.precision(6);
    cout << fixed << p;
    return 0;
}
