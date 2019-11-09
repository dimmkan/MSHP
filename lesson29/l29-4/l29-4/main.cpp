#include <iostream>
using namespace std;
void init_array(int* arr, int size){
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
}
void print_array(int* arr, int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}
int* array_insert(int* a, int n, int x = 100, int k = 0){
    int* new_arr = new int[n+1];
    for(int i = n; i > k; i--){
        new_arr[i] = a[i-1];
    }
    for(int i = 0; i < k; i++){
        new_arr[i] = a[i];
    }
    new_arr[k] = x;
    delete[] a;
    return new_arr;
}
int main()
{
    int n, x, k;
    cin >> n;
    int* arr = new int[n];
    init_array(arr, n);
    cin >> x >> k;
    int* new_arr = array_insert(arr, n, x, k);
    print_array(new_arr, n+1);
    delete[] arr;
    return 0;
}
