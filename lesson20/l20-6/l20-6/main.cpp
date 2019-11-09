#include <iostream>

using namespace std;

int main()
{
    const int SZ = 35;
    int arr[SZ] = {};
    int n, last;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    last = arr[n-1];
    if(n <= SZ){
        for(int i = n-1; i >= 0; i--){
            arr[i+1] = arr[i];
        }
        arr[0] = last;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
