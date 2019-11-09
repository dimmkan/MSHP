#include <iostream>

using namespace std;

int main()
{
    const int sz = 1000;
    int arr[sz] = {};
    int m, n, count = 0;
    cin >> m;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] > arr[j]){
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    int curSize = m - 3;
    for(int i = 0; i < n; i++) {
        if(arr[i] - curSize >= 3) {
            count++;
            curSize = arr[i];
        }
    }
    cout << count;
    return 0;
}
