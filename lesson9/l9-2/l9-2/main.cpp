#include <iostream>
using namespace std;
int main()
{
    short n, i = 1;
    cin >> n;
    int sum = 0;
    while(i <= n){
        sum += i*i;
        i++;
    }
    cout << sum;
    return 0;
}
