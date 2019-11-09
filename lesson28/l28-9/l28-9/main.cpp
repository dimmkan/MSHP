#include <iostream>
using namespace std;
void bubbleSort(int arr[100], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = i+1; j < size; j++){
            if(arr[i] > arr[j]){
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}
int main()
{
    int n, m, arr_n[100], arr_m[100], res_arr[100], k = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr_n[i];
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> arr_m[i];
    }
    for(int i = 0; i < n; i++){
        bool flag = false;
        for(int j = 0; j < m; j++){
            if(arr_n[i] == arr_m[j]){
                flag = true;
                break;
            }
        }
        if(!flag) res_arr[k++] = arr_n[i];
    }
    bubbleSort(res_arr, k);
    for(int i = 0; i < k; i++){
        cout << res_arr[i] << " ";
    }
    return 0;
}
