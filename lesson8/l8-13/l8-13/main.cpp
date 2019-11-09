#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int res = 1;
    while (res < n){
        res *= 5;
    }
    cout << ((res == n) ? "YES" : "NO");
    return 0;
}
