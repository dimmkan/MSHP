#include <iostream>
using namespace std;
int* read_array(int n){
    int *x = new int[n];
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    return x;
}
void print_array(int *a, int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}
int* sum_arrays(int *a, int *b, int n){
    int *sum = new int[n];
    for(int i = 0; i < n; i++){
        sum[i] = a[i] + b[i];
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int *arr = read_array(n);
    int *arr2 = read_array(n);
    int *sum = sum_arrays(arr, arr2, n);
    print_array(sum, n);
    delete[] arr;
    delete[] arr2;
    delete[] sum;
    return 0;
}
