#include <iostream>
using namespace std;
int max(int a, int b){
    int max;
    (a > b) ? max = a : max = b;
    return max;
}
int main()
{
    int x, y;
    cin >> x >> y;
    cout << max(x, 2*y) * max(2*x-y, y);
    return 0;
}
