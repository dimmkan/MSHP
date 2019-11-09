#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    double sr_a, sr_g;
    sr_a = (a+b)/2;
    sr_g = sqrt(a*b);
    cout.precision(6);
    cout << fixed << sr_a << " " << sr_g;
    return 0;
}
