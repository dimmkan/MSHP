#include <iostream>
using namespace std;
int main()
{
    short x, n;
    cin >> x >> n;
    for(int i=0; i < n; i++){
        x *= 2;
    }
    cout << x;
    return 0;
}
