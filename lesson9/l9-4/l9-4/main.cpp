#include <iostream>
using namespace std;
int main()
{
    int res = 1;
    int k = 1;
    while (k != 0){
        cin >> k;
        if (k != 0){
            res *= k;
        }
     }
    cout << res;
    return 0;
}
