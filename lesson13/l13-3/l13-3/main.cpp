#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int p = 1;
    while(p*8 <= n){
        p *= 8;
    }
    do{
        int d = n / p;
        cout << d;
        n %= p;
        p /= 8;
    }while(p);
    return 0;
}
