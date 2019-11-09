#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool z = (a%2!=0 && b%2!=0 && c%2!=0);
    cout << z;
    return 0;
}
