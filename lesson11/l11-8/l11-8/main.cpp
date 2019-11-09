#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    do{
        int tmp = n % 10;
        sum += tmp;
        n /= 10;
    }while(n > 0);
    cout << sum;
    return 0;
}
