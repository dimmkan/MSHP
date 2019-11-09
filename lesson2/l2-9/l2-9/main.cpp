#include <iostream>

using namespace std;

int main()
{
    int m, p = 4;
    long long int k = 12;
    cin >> m;
    k = 12 + (p + 3 * m/500) * (m/100);
    cout << k/100 << " " << k%100;
    return 0;
}
