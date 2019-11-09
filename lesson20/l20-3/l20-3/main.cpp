#include <iostream>

using namespace std;

int main()
{
    const int SZ = 10000;
    int arr[SZ] = {};
    int n, k, m;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> k >> m;
    int razn = m-k;
    if(n > 0 && n >= m){
        for(int i = k; i < n-1-razn; i++){
            arr[i] = arr[i+1+razn];
        }
        n -= razn+1;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
