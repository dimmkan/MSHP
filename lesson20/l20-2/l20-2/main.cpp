#include <iostream>

using namespace std;

int main()
{
    const int SZ = 15;
    int arr[SZ] = {};
    int n, k;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> k;
    if(n > 0 && n >= k){
        for(int i = k; i < n-1; i++){
            arr[i] = arr[i+1];
        }
        n--;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
