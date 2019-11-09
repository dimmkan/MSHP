#include <iostream>
using namespace std;
int main()
{
    short int k, n;
    cin >> k >> n;
    if(n%k == 0){
        cout << n/k << " " << k;
    }else {
        cout << (n/k)+1 << " " << n%k;
    }
    return 0;
}
