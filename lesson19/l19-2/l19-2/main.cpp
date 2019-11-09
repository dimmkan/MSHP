#include <iostream>

using namespace std;

int main()
{
    int n, k;
    bool flag = false;
    cin >> n;
    int arr[n] = {};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> k;
    for(int i = 0; i < n; i++){
        if(arr[i] == k && !flag){
            cout << i+1 << " ";
            flag = true;
        }
    }
    if(!flag){
        cout << 0;
    }
    return 0;
}
