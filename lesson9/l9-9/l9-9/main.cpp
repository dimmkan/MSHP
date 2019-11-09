#include <iostream>
using namespace std;
int main()
{
    int n = 1, tmp = 0, i = 0;
    bool flag = true;
    while(n >= 0){
        cin >> n;
        if (n >= 0){
            if(i == 0){
                tmp = n;
                i++;
            }else {
                if(tmp != n){
                    flag = false;
                    tmp = n;
                }
                i++;
            }
        }
    }
    cout << (flag ? "YES" : "NO");
    return 0;
}
