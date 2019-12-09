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
    int n;
    cin >> n;
    Point *arr_pt = new Point[n];
    for(int i = 0; i < n; i++){
        Point p;
        cin >> p.x >> p.y;
        arr_pt[i] = p;
    }
    double res = 0;
    for(int i = 0; i < n-1; i++){
        res += distance_ptr(arr_pt[i], arr_pt[i+1]);
    }
    cout << fixed << setprecision(4) << res;
}
