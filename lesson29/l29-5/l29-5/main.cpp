#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//Прототипы перегружаемых методов
double triangle_area (double a, double b, double c);
double triangle_area (double x1, double y1, double x2, double y2, double x3, double y3);

int main()
{
    int n;
    cin >> n;
    double a, b, c, x1, x2, x3, y1, y2, y3;
    if(n == 3){
        cin >> a >> b >> c;
        cout.precision(4);
        cout << fixed << triangle_area(a, b, c);
    }else {
        if(n == 6){
            cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
            cout.precision(4);
            cout << fixed << triangle_area(x1, y1, x2, y2, x3, y3);
        }
    }
    return 0;
}
//Реализация перегружаемых методов
double triangle_area (double a, double b, double c){
    double p = (a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
double triangle_area (double x1, double y1, double x2, double y2, double x3, double y3){
    return 0.5*fabs((x2-x1)*(y3-y1) - (x3-x1)*(y2-y1));
}
