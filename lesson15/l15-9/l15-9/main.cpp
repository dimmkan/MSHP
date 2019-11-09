#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double s, b, c;
    cin >> s >> b >> c;
    cout.precision(6);
    cout << fixed << 2 * c * b *(s / 100.0);
    return 0;
}
