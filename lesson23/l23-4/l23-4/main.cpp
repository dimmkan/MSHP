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
void delete_elem(int *A, int *size, int index){
    for(int i = index; i < *size; i++){
        *(A+i) = *(A+i+1);
    }
    *size -= 1;
}
void unique(int *A, int *size, int contr){
    for(int i = 0; i < *size; i++){
        if( A[i] == contr ){
            delete_elem(A, size, i);
            i--;
        }
    }
}
void print_array(int *a, int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}
int main()
{
    int n, contr;
    int *arr = read_array(&n);
    cin >> contr;
    unique(arr, &n, contr);
    print_array(arr, n);
    delete [] arr;
    return 0;
}
