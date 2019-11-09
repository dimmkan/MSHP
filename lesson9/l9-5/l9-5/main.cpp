#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    bool flag = false;
    while(n != 100){
       cin >> n;
       if (n == 77){
           flag = true;
       }
    }
    cout << (flag ? "YES" : "NO");
    return 0;
}
