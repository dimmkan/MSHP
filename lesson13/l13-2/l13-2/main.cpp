#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool flag = false;
    do{
        int k = n % 10;
        if(k == 0){
            flag = true;
        }
        n /= 10;
    }while(n > 0);
    cout << (flag ? "YES" : "NO");
    return 0;
}
