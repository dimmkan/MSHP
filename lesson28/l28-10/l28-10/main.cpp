#include <iostream>
using namespace std;
int main()
{
    int arr[200], n, count = 0, res;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        int tmp_cnt = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]) tmp_cnt++;
        }
        if(tmp_cnt > count){
            count = tmp_cnt;
            res = arr[i];
        }
    }
    cout << res;
    return 0;
}
