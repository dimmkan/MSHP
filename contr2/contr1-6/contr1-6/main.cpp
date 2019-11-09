#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int p = 1;
    while(p*10 <= n){
            p *= 10;
        }
    do{
        int k = n / p;
        if(k != 0 && k != 5 ){
            cout << k;

        }
        n %= p;
        p /= 10;
    }while(n);    
    return 0;
}
