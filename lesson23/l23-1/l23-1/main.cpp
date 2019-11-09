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
void reverse_elem(int *a, int n){
    int min = a[0], index = 0;
    for(int i = 1; i < n; i++){
        if(a[i] <= min){
            min = a[i];
            index = i;
        }
    }
    a[index] = a[0];
    a[0] = min;
}
int main()
{
    int n;
    int *arr = read_array(&n);
    reverse_elem(arr, n);
    print_array(arr, n);
    delete [] arr;
    return 0;
}
