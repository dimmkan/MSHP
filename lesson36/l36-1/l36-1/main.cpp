#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct Point{
    double x;
    double y;
};

double distance_ptr(Point A, Point B){
    return sqrt(pow(B.x - A.x, 2)+pow(B.y - A.y, 2));
}

int main()
{
    Point p1, p2;
    cin >> p1.x >> p1.y;
    cin >> p2.x >> p2.y;
    cout.precision(6);
    cout << fixed << distance_ptr(p1, p2);
    return 0;
}
