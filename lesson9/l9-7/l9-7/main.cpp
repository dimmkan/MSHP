#include <iostream>
using namespace std;
int main()
{
    short r, tmp = 0;
    bool flag = true;
    while (r != -1){
        cin >> r;
        if(r > 0){
            if(tmp > 0){
                if(tmp <= r){
                    flag = false;
                }
                tmp = r;
            }else {
                tmp = r;
            }
        }
    }
    cout << (flag ? "YES" : "NO");
    return 0;
}
