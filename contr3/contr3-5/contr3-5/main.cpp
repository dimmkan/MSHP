#include <iostream>
using namespace std;
int find_min(int data[100], int n) {
    int min = data[0];
    for (int i = 1; i < n; ++i)
        if (data[i] < min)
            min = data[i];
    return min;
}
int find_max(int data[100], int n) {
    int max = data[0];
    for (int i = 1; i < n; ++i)
        if (data[i] > max)
            max = data[i];
    return max;
}
int count_zn(int arr[100], int n, int zn){
    int res = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == zn){
            res++;
        }
    }
    return res;
}
int main()
{
    const int sz = 100;
    int n, min, max, cnt_min = 0, cnt_max = 0;
    int arr[sz] = {};
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    min = find_min(arr, n);
    max = find_max(arr, n);
    cnt_min = count_zn(arr, n, min);
    cnt_max = count_zn(arr, n, max);
    cout << cnt_max - cnt_min;
    return 0;
}
