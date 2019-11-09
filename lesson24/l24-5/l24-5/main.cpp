#include <iostream>
using namespace std;
const int N = 100;
void move_left(int *A, int size){
    int *end = (A+size-1);
    int tmp_first = *A;
    for(int i = 0; i < size - 1; i++){
        A[i] = A[i+1];
    }
    *end = tmp_first;
}
void filling_array(int arr[N][N], int n){
    int initial_arr[N] = {};
    for(int i = 0; i < n; i++){
        initial_arr[i] = i+1;
    }
    for(int r = 0; r < n; r++){
        for(int t = 0; t < n; t++){
            arr[r][t] = initial_arr[t];
        }
        move_left(initial_arr, n);
    }
}
void print_array(int arr[N][N], int n){
    for(int r = 0; r < n; r++){
        for(int t = 0; t < n; t++){
            cout << arr[r][t] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[N][N] = {}, n;
    cin >> n;
    filling_array(arr, n);
    print_array(arr, n);
    return 0;
}
