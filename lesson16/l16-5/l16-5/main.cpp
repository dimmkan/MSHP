#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int n;
    double sum = 0;
    cin >> n;
    for(int i = 0; i <= n; i++){
        sum += 1/pow(3.0, double(i));
    }
    cout.precision(6);
    cout << fixed << sum;
    return 0;
}
