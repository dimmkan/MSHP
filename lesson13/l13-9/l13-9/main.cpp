#include <iostream>
using namespace std;
int main()
{
    int n, tmp_n;
    long long int p = 1;
    bool flag = false;
    cin >> n;
    tmp_n = n;
    while(p*10 <= n){
        p *= 10;
    }
    do{
        int d = n/p;
        if(d%2 == 0){
            if(d == 0){
                flag = (flag) ? true : false;
            }else{
                flag = true;
            }
            if(flag){cout << d;}
        }
        n %= p;
        p /= 10;
    }while(n);
    p = 1;
    while(p*10 <= tmp_n){
        p *= 10;
    }
    do{
        int d = tmp_n/p;
        if(d%2 != 0){
            cout << d;
        }
        tmp_n %= p;
        p /= 10;
    }while(tmp_n);
    return 0;
}
