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
void reverse_array(int *A, int size){
    int *end = (A+size-1);
    for(int i = 0; i < size/2; i++){
        int tmp = *(A+i);
        *(A+i) = *(end-i);
        *(end-i) = tmp;
    }
}
int main()
{
    const int SZ = 100;
    int arr[SZ] = {};
    int size = read_array(arr);
    reverse_array(arr, size);
    print_array(arr, size);
    return 0;
}
