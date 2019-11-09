#include <iostream>
#include <cmath>
using namespace std;
bool is_prime(int n){
    bool prime = true;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0){
            prime = false;
        }
    }
    return prime;
}
int main()
{
    int n;
    cin >> n;
    (is_prime(n)) ? cout << "YES" : cout << "NO";
    return 0;
}
