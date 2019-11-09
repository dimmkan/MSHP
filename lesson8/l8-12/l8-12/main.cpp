#include <iostream>
using namespace std;
int main()
{
    int h;
    cin >> h;
    int i=0, n=1;
    int k = h/3;
    while (i < k) {
        n *= 2;
        i += 1;
    }
    cout << n;
    return 0;
}
