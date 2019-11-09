#include <iostream>

using namespace std;

int main()
{
    const int SZ = 50;
    int arr[SZ] = {};
    int n,k;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> k;
    if(arr[k-1] > arr[k]){
        int tmp = arr[k-1];
        arr[k-1] = arr[k];
        arr[k] = tmp;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
