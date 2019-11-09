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
void print_array(int *a, int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}
void odd_even_array(int *arr, int *odd, int *even, int *odd_index, int *even_index, int n){
    for(int i = 0; i < n; i++){
        if(arr[i]%2 == 0){
            even[*even_index] = arr[i];
            *even_index += 1;
        }else{
            odd[*odd_index] = arr[i];
            *odd_index += 1;
        }
    }
}
int main()
{
    int n, odd_index = 0, even_index = 0;
    int *arr = read_array(&n);
    int *odd = new int[n];
    int *even = new int[n];
    odd_even_array(arr, odd, even, &odd_index, &even_index, n);
    print_array(even, even_index);
    print_array(odd, odd_index);
    delete [] arr;
    delete [] odd;
    delete [] even;
    return 0;
}
