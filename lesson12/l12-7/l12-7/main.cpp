#include <iostream>
using namespace std;
int main()
{
    int n, max = 0;
    cin >> n;
    do{
        int tmp = n % 10;
        max = ((tmp > max) ? tmp : max);
        n /= 10;
    }while(n > 0);
    cout << max;
    return 0;
}
