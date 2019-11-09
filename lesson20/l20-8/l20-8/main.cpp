#include <iostream>

using namespace std;

int main()
{
    const int SZ = 15;
    int arr[SZ] = {};
    int k, s;
    for(int i = 0; i < SZ; i++){
        cin >> arr[i];
    }
    cin >> k >> s;
    for(int i = k; i < s-1; i++, s--){
        int tmp;
        tmp = arr[i];
        arr[i] = arr[s-2];
        arr[s-2] = tmp;
    }
    for(int i = 0; i < SZ; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
