#include <iostream>
using namespace std;
int find_min(int data[30], int n) {
    int min = data[0];
    for (int i = 1; i < n; ++i)
        if (data[i] < min)
            min = data[i];
    return min;
}
int find_max(int data[30], int n) {
    int max = data[0];
    for (int i = 1; i < n; ++i)
        if (data[i] > max)
            max = data[i];
    return max;
}
void zam(int arr[], int min, int max, int n){
    for(int i = 0; i < n; i++){
        if(arr[i] == min){
            arr[i] = max;
        }
    }
}
int main()
{
    const int sz = 30;
    int n, min, max;
    int arr[sz] = {};
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    min = find_min(arr, n);
    max = find_max(arr, n);
    zam(arr, min, max, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
