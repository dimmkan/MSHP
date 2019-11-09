#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int h, m, s;
    cin >> h >> m >> s;
    double dh = double(h);
    double dm = double(m);
    double ds = double(s);
    double ugol = dh*30. + dm*(30./60.) + ds*(30./3600.);
    cout << setprecision(11) << ugol;
    return 0;
}
