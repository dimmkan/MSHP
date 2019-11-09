#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double eps = 0.00000001;
    if(fabs(a+b-c) < eps){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}
