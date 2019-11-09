#include <iostream>
using namespace std;

void binary(int n){
    if(n > 1){
        binary(n/2);
    }
    cout << n%2;
}

int main()
{
    long long int n, res;
    cin >> n;
    binary(n);
    return 0;
}
