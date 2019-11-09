#include <iostream>

using namespace std;

int main()
{
    const int SZ = 35;
    int arr[SZ] = {};
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int tmp_n = n;
    for(int i = 0; i < tmp_n; i++, tmp_n--){
        int tmp;
        tmp = arr[i];
        arr[i] = arr[tmp_n-1];
        arr[tmp_n-1] = tmp;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
