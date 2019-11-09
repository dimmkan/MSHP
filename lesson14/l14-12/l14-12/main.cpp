#include <iostream>
using namespace std;
int main()
{
    short n;
    int sum_1 = 0, sum_2 = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        short x1, x2;
        cin >> x1 >> x2;
        sum_1 += x1;
        sum_2 += x2;
    }
    bool usl = ((sum_1/n - sum_2/n) >= 20);
    cout << (usl ? "YES" : "NO");
    return 0;
}
