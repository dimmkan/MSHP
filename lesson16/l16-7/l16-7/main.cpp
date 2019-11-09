#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double sum = 1000.0;
    for(int i = 0; i < n; i++){
        sum += sum*0.02;
    }
    cout << fixed << setprecision(6) << sum;
    return 0;
}
