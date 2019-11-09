#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double sum = 10.0;
    for(int i = 1; i < n; i++){
        sum += sum*0.1;
    }
    cout << fixed << setprecision(6) << sum;
    return 0;
}
