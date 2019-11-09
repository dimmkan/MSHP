#include <iostream>
using namespace std;
int main()
{
    int n, k = 0;
    cin >> n;
    bool flag = false;
    do{
        k = n % 10;
        if(k == 3){
            flag = true;
        }
        n /= 10;
    }while(n > 0);
    cout << (flag ? "YES" : "NO");
    return 0;
}
