#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int fib, ch1 = 1, ch2 = 1;
    for(int i = 2; i < n; i++){
        fib = ch1 + ch2;
        ch1 = ch2;
        ch2 = fib;
    }
    cout << fib;
    return 0;
}
