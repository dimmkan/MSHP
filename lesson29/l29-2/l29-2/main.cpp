#include <iostream>
using namespace std;
bool is_point_in_circle(double x, double y, double xc, double yc, double r){
    double dx = x-xc, dy = y-yc;
    return (r*r > (dx*dx + dy*dy));
}
int main()
{
    double x, y, xc, yc, r;
    cin >> x >> y >> xc >> yc >> r;
    cout << (is_point_in_circle(x, y, xc, yc, r)?"YES":"NO");
    return 0;
}
