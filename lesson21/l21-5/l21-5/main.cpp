#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double perimetr(int a, int b, int h){
    double p;
    p = a+b+2*sqrt(pow(h, 2)+pow(a-b, 2)/4.0);
    return p;
}

int main()
{
    int a, b, h;
    double sum = 0.0;
    cin >> a >> b >> h;
    sum += perimetr(a, b, h);
    cin >> a >> b >> h;
    sum += perimetr(a, b, h);
    cout.precision(6);
    cout << fixed << sum;
    return 0;
}
