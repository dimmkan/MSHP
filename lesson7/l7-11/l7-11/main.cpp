#include <iostream>
using namespace std;
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    bool res = false;
    res = ((k%n == 0 || k%m == 0) && k<n*m);
    cout << (res?"YES":"NO");
    return 0;
}
