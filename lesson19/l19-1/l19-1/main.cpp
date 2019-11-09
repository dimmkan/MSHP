#include <iostream>

using namespace std;

int main()
{
    int n;
    bool flag = false;
    cin >> n;
    int arr[n] = {};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 1; i < n; i++){
        if(arr[i] > arr[i-1]){
            cout << i+1 << " ";
            flag = true;
        }
    }
    if(!flag){
        cout << 0;
    }
    return 0;
}
