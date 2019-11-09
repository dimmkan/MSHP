#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double hypot(double a, double b){
    double c;
    c = sqrt(pow(a, 2)+pow(b, 2));
    return c;
}

int main()
{
    int ab, ac, cd;
    double bc, bd, p;
    cin >> ab >> ac >> cd;
    bc = hypot(ab, ac);
    bd = hypot(bc, cd);
    p = double(ab + ac + cd) + bd;
    cout.precision(6);
    cout << fixed << p;
    return 0;
}
