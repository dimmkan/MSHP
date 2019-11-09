#include <iostream>
using namespace std;
int read_array(int *A){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> *(A+i);
    }
    return n;
}
void print_array(int *A, int size){
    for(int i = 0; i < size; i++){
        cout << *(A+i) << " ";
    }
}
void move_right(int *A, int size, int k){
    for(int j = 0; j < k; j++){
        int *end = (A+size-1);
        int tmp_end = *end;
        for(int i = size-2; i >= 0; i--){
            *(A+i+1) = *(A+i);
        }
        *A = tmp_end;
    }
}
void move_left(int *A, int size, int k){
    for(int j = 0; j < k; j++){
        int *end = (A+size-1);
        int tmp_first = *A;
        for(int i = 0; i < size - 1; i++){
            *(A+i) = *(A+i+1);
        }
        *end = tmp_first;
    }
}
void shift(int *A, int size, int k){
    if(k > 0){
        move_right(A, size, k);
    }else{
        move_left(A, size, abs(k));
    }
}
int main()
{
    const int SZ = 100;
    int arr[SZ] = {};
    int size = read_array(arr);
    int k;
    cin >> k;
    shift(arr, size, k);
    print_array(arr, size);
    return 0;
}
