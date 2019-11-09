#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int sum = 0;
    while (a <= b){
        sum += a;
        a += 1;
    }
    cout << sum;
    return 0;
}
