#include <iostream>
using namespace std;
int main()
{
    long long int sum = 0, p = 1;
    short n;
    cin >> n;
    for(int i=0; i < n; i++){
        int d;
        cin >> d;
        sum += d*p;
        p *= 10;
    }
    cout << sum;
    return 0;
}
