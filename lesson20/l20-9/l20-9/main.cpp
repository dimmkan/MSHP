#include <iostream>

using namespace std;

int main()
{
    int n, count = 0;
    const int SZ = 10000;
    cin >> n;
    int arr[SZ] = {};
    int arr2[SZ] = {};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    bool uniq[SZ] = {};
    for(int i = 0; i < n; i++){
        uniq[i] = true;
    }
    for(int i = 0; i < n; i++){
        if(uniq[i]){
            for(int j = i+1; j<n; j++){
                if(arr[i] == arr[j]){
                    uniq[j] = false;
                }
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(uniq[i]){
            arr2[count] = arr[i];
            count++;
        }
    }
    for(int i = 0; i < count; i++){
        cout << arr2[i] << " ";
    }
    return 0;
}
