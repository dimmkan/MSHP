#include <iostream>
using namespace std;
int* read_array(int *n){
    cin >> *n;
    int *x = new int[*n];
    for(int i = 0; i < *n; i++){
        cin >> x[i];
    }
    return x;
}
void print_array(int *a, int *b, int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " " << b[i] << endl;
    }
}
int* rearrange(int *a, int n){
    int *arr = new int[n];
    for(int i = 0; i < n; i += 2){
        arr[i] = a[i+1];
        arr[i+1] = a[i];
    }
    return arr;
}
int main()
{
    int n;
    int *arr = read_array(&n);
    int *arr2 = rearrange(arr, n);
    print_array(arr, arr2, n);
    delete[] arr;
    delete[] arr2;
    return 0;
}
