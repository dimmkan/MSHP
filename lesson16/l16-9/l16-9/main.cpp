#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double sum = 0.0;
    for(int i = n; i > 0; i--){
        sum = sqrt(double(i)+sum);
    }
    cout << fixed << setprecision(6) << sum;
    return 0;
}
