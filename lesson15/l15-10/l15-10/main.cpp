#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double h, m, s;
    cin >> h >> m >> s;
    cout.precision(6);
    cout << fixed << 30*h + m/2 + s/120;
    return 0;
}
