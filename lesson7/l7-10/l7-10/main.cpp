#include <iostream>
using namespace std;
int main()
{
    short a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << (((a + b)%2 == (c + d)%2)?"YES":"NO");
    return 0;
}
