#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool flag = false;
    int k = n % 10;
    n /= 10;
    do{
        int tmp = n % 10;
        if(tmp == 3 && tmp == k){
            flag = true;
        }
        k = tmp;
        n /= 10;
    }while(n > 0);
    cout << (flag ? "YES" : "NO");
    return 0;
}
