#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;
    double eps = 0.00001;
    cout.precision(5);
    if(fabs(0.0 - (1+(x+y)/2)) < eps){
        cout << "NO SOLUTION";
    }else {
        cout << fixed << 1/(1+(x+y)/2);
    }
    return 0;
}
