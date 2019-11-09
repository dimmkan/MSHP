#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int max = (a > b) ? (a > c) ? a : c : (b > c) ? b : c;
    int sum = a+b+c;
    cout << ((max > (sum-max)*2)?"YES":"NO");
    return 0;
}
