#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    short n, k, x, m, i=0;
    cin >> n;
    while(i < n){
        cin >> k;
        sum += k;
        i++;
    }
    cin >> x >> m;
    for(i = 0; i < x; i++){
        sum *= m;
    }
    cout << sum;
    return 0;
}
