#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double perimetr(int x1, int y1, int x2, int y2, int x3, int y3){
    double p;
    p = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2)) + sqrt(pow(x3-x2, 2) + pow(y3-y2, 2)) + sqrt(pow(x3-x1, 2) + pow(y3-y1, 2));
    return p;
}

int main()
{
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double p = perimetr(x1, y1, x2, y2, x3, y3);
    cout.precision(6);
    cout << fixed << p;
    return 0;
}
