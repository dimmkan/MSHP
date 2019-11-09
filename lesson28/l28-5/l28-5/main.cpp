#include <iostream>
using namespace std;
int main()
{
    int res_arr[200], n;
    cin >> n;
    for(int i = 0, k = 0; i < n; i++){
        cin >> res_arr[k];
        k += 2;
    }
    for(int i = 0, k = 1; i < n; i++){
        cin >> res_arr[k];
        k += 2;
    }
    for(int i = 0; i < n*2; i++){
        cout << res_arr[i] << " ";
    }
    return 0;
}
