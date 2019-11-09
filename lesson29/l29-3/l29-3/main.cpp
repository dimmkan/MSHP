#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void triangle_stats(double A, double B, double C, double *area, double *perimeter){
    *perimeter = A+B+C;
    double p = *perimeter/2;
    *area = sqrt(p*(p-A)*(p-B)*(p-C));
}
int main()
{
    double a, b, c, ar, per;
    cin >> a >> b >> c;
    triangle_stats(a, b, c, &ar, &per);
    cout.precision(6);
    cout << fixed << ar << endl;
    cout << fixed << per << endl;
    return 0;
}
