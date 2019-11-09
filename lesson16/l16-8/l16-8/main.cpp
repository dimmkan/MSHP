#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double sum_sin = 0.0, sum_all = 0.0;
    for(int i = 1; i <= n; i++){
        sum_sin += sin(double(i));
        sum_all += 1/sum_sin;
    }
    cout << fixed << setprecision(6) << sum_all;
    return 0;
}
