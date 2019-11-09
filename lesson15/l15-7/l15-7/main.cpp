#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double eps = 0.0000001, D = pow(b, 2.0) - 4*a*c;
    if(D > 0.0){
        double x1, x2;
        x1 = (-b + sqrt(D)) / (2*a);
        x2 = (-b - sqrt(D)) / (2*a);
        cout.precision(6);
        if(x1 > x2){
            double tmp;
            tmp = x1;
            x1 = x2;
            x2 = tmp;
        }
        cout << fixed << x1 << " " << x2;
    }else{
        if(fabs(D - 0.0) < eps){
            double x;
            x = -b / (2*a);
            cout.precision(6);
            cout << fixed << x;
    }
}
return 0;
}
