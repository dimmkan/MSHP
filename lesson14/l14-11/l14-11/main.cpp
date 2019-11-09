#include <iostream>
using namespace std;
int main()
{
    short n, etalon;
    cin >> n >> etalon;
    bool flag = true;
    for(int i = 0; i < n-1; i++){
        int m;
        cin >> m;
        if(m != etalon){
            flag = false;
        }
    }
    cout << (flag ? "YES" : "NO");
    return 0;
}
