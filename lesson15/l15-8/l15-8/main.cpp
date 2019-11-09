#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double m;
    cin >> m;
    cout.precision(2);
    cout << fixed << (m*2.3) - (m*2.3*0.2);
    return 0;
}
