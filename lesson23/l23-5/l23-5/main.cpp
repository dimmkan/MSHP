#include <iostream>
using namespace std;
int* naturals(int n){
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        arr[i] = i+1;
    }
    return arr;
}
void print_array(int *A, int size){
    for(int i = 0; i < size; i++){
        cout << A[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int *arr = naturals(n);
    print_array(arr, n);
    delete[] arr;
    return 0;
}
