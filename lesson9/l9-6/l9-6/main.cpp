#include <iostream>
using namespace std;
int main()
{
    int n, e, i = 0;
    bool flag = false;
    cin >> n;
    while (i < n){
        cin >> e;
        if(e == 0){
            flag = true;
        }
        i++;
    }
    cout << (flag ? "YES" : "NO");
    return 0;
}
