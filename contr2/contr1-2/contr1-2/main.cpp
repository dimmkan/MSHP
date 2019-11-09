#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int a = n, ans = n == 1 ? 1 : 2;
    for(int i = 2; i * i <= a; i++)
    {
        if(n % i != 0) continue;
        int j = n / i;
        ans += 2 - !!(i == j);
    }
    cout << ans;
    return 0;
}
