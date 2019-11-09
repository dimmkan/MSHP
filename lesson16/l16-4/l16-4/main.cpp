#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    double sum = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        sum += 1/double(i);
    }
    cout.precision(6);
    cout << fixed << sum;
    return 0;
}
