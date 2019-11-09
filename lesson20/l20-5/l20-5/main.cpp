#include <iostream>

using namespace std;

int main()
{
    const int SZ = 100;
    int arr[SZ] = {};
    int n, ind = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int min = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
            ind = i;
        }
    }
    if(n > 0 && n > ind){
        for(int i = ind; i < n-1; i++){
            arr[i] = arr[i+1];
        }
        n--;
    }
    if(n <= SZ){
        for(int i = n-1; i >= 0; i--){
            arr[i+1] = arr[i];
        }
        arr[0] = min;
        n++;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
